#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5   // 缓冲区大小

int buffer[BUFFER_SIZE];   // 环形缓冲区数组
int in = 0;               
int out = 0;               

sem_t empty;   
sem_t full;    
sem_t mutex;   

// 生产者
void* producer(void* arg) {
    int item = 1;
    while (1) {
        printf("生产者: 生产了物品 %d\n", item);

        sem_wait(&empty);   // P(empty)：等待有空闲槽
        sem_wait(&mutex);   // P(mutex)：进入临界区

        buffer[in] = item;
        printf("生产者: 放入物品 %d 到位置 %d\n", item, in);
        in = (in + 1) % BUFFER_SIZE;

        sem_post(&mutex);   // V(mutex)
        sem_post(&full);    // V(full)：通知消费者

        item++;
        sleep(1);
    }
    return NULL;
}

// 消费者
void* consumer(void* arg) {
    int item;
    while (1) {
        sem_wait(&full);    // P(full)：等待缓冲区有数据
        sem_wait(&mutex);   // P(mutex)

        item = buffer[out];
        printf("消费者: 从位置 %d 取出物品 %d\n", out, item);
        out = (out + 1) % BUFFER_SIZE;

        sem_post(&mutex);
        sem_post(&empty);   // V(empty)：通知生产者有空槽

        printf("消费者: 消费了物品 %d\n", item);
        sleep(2);  
    }
    return NULL;
}

int main() {
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    sem_init(&mutex, 0, 1);

    pthread_t prod_tid, cons_tid;
    pthread_create(&prod_tid, NULL, producer, NULL);
    pthread_create(&cons_tid, NULL, consumer, NULL);

    pthread_join(prod_tid, NULL);  // 程序将无限运行，按 Ctrl+C 终止
    pthread_join(cons_tid, NULL);

    sem_destroy(&empty);
    sem_destroy(&full);
    sem_destroy(&mutex);
    return 0;
}