#include <stdio.h>
#define MAX_N 105
#define MAX_M 25

int frames[MAX_M];     // 物理块页面号
int R[MAX_M];          // 访问位 0/1
int M[MAX_M];          // 修改位 0/1
int pages[MAX_N];      // 页面访问序列
int modify[MAX_N];     // 每个页面是否修改
int frame_cnt = 0;
int ptr = 0;           // Clock循环指针

// 判断页面是否在物理块，返回下标，无则-1
int findPage(int page)
{
    for (int i = 0; i < frame_cnt; i++)
    {
        if (frames[i] == page)
            return i;
    }
    return -1;
}

// 第一轮：找 R=0 && M=0
int findType1()
{
    for (int i = 0; i < frame_cnt; i++)
    {
        int pos = (ptr + i) % frame_cnt;
        if (R[pos] == 0 && M[pos] == 0)
        {
            ptr = (pos + 1) % frame_cnt;
            return pos;
        }
    }
    return -1;
}

// 第二轮：找 R=0 && M=1，沿途R置0
int findType2()
{
    for (int i = 0; i < frame_cnt; i++)
    {
        int pos = (ptr + i) % frame_cnt;
        if (R[pos] == 0 && M[pos] == 1)
        {
            ptr = (pos + 1) % frame_cnt;
            return pos;
        }
        R[pos] = 0;
    }
    return -1;
}

// 第三轮：重新扫描找 Type1
int findType1Again()
{
    for (int i = 0; i < frame_cnt; i++)
    {
        int pos = (ptr + i) % frame_cnt;
        if (R[pos] == 0 && M[pos] == 0)
        {
            ptr = (pos + 1) % frame_cnt;
            return pos;
        }
    }
    return -1;
}

// 第四轮：最后找 Type2
int findType2Again()
{
    for (int i = 0; i < frame_cnt; i++)
    {
        int pos = (ptr + i) % frame_cnt;
        if (R[pos] == 0 && M[pos] == 1)
        {
            ptr = (pos + 1) % frame_cnt;
            return pos;
        }
    }
    return 0;
}

// 改进型Clock获取淘汰位置
int getReplacePos()
{
    int pos;
    pos = findType1();
    if (pos != -1) return pos;

    pos = findType2();
    if (pos != -1) return pos;

    pos = findType1Again();
    if (pos != -1) return pos;

    return findType2Again();
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &pages[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &modify[i]);

    int miss = 0;
    for (int i = 0; i < n; i++)
    {
        int page = pages[i];
        int md = modify[i];
        int pos = findPage(page);

        // 页面命中：访问位置1
        if (pos != -1)
        {
            R[pos] = 1;
            continue;
        }

        // 缺页
        miss++;
        if (frame_cnt < m)
        {
            frames[frame_cnt] = page;
            R[frame_cnt] = 1;
            M[frame_cnt] = md;
            frame_cnt++;
        }
        else
        {
            int rep = getReplacePos();
            frames[rep] = page;
            R[rep] = 1;
            M[rep] = md;
        }
    }

    int rate = (miss * 100) / n;
    printf("%d %d\n", miss, rate);
    return 0;
}