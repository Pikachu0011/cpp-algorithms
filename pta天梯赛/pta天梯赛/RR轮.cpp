#include<iostream>
#include<queue>
#include<algorithm>   // for sort
#include<iomanip>
using namespace std;

struct Process {
    int pid;
    int daotime;
    int servetime;
    int remainTime;
    int begintime;
    int finishtime;
    int turntime;
    int waittime;
    float quantime;
    bool firstRun;
};

int main() {
    int n, q;
    cout << "输入进程数：";
    cin >> n;
    cout << "输入时间片大小：";
    cin >> q;

    Process p[100];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cin >> p[i].daotime >> p[i].servetime;
        p[i].remainTime = p[i].servetime;
        p[i].firstRun = true;
        p[i].begintime = 0;
        p[i].waittime = 0;
    }

    // 按到达时间排序的副本（只存下标，避免复制整个结构体）
    int order[100];
    for (int i = 0; i < n; i++) order[i] = i;
    sort(order, order + n, [&](int a, int b) {
        return p[a].daotime < p[b].daotime;
    });

    queue<int> readyQueue;
    int currentTime = 0;
    int completed = 0;
    int nextIdx = 0;   // order数组的下标

    auto addArrived = [&]() {
        while (nextIdx < n && p[order[nextIdx]].daotime <= currentTime) {
            readyQueue.push(order[nextIdx]);  // 直接存入原始下标
            nextIdx++;
        }
    };

    addArrived();

    while (completed < n) {
        if (readyQueue.empty()) {
            if (nextIdx < n) {
                currentTime = p[order[nextIdx]].daotime;
                addArrived();
                continue;
            } else {
                break;
            }
        }

        int i = readyQueue.front();
        readyQueue.pop();

        if (p[i].firstRun) {
            p[i].begintime = currentTime;
            p[i].firstRun = false;
        }

        int execTime = min(q, p[i].remainTime);
        currentTime += execTime;
        p[i].remainTime -= execTime;

        addArrived();  // 执行期间新进程可能到达

        if (p[i].remainTime == 0) {
            p[i].finishtime = currentTime;
            p[i].turntime = p[i].finishtime - p[i].daotime;
            p[i].waittime = p[i].turntime - p[i].servetime;
            p[i].quantime = (float)p[i].turntime / p[i].servetime;
            completed++;
        } else {
            readyQueue.push(i);
        }
    }

    // 输出
    cout << "\nPID\t到达\t服务\t开始\t结束\t周转\t带权周转\t等待\n";
    double sum_turn = 0, sum_weight = 0, sum_wait = 0;
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t\t%d\n",
               p[i].pid, p[i].daotime, p[i].servetime,
               p[i].begintime, p[i].finishtime, p[i].turntime,
               p[i].quantime, p[i].waittime);
        sum_turn += p[i].turntime;
        sum_weight += p[i].quantime;
        sum_wait += p[i].waittime;
    }

    cout << fixed << setprecision(2);
    cout << "\n平均周转时间: " << sum_turn / n << endl;
    cout << "平均带权周转时间: " << sum_weight / n << endl;
    cout << "平均等待时间: " << sum_wait / n << endl;

    return 0;
}