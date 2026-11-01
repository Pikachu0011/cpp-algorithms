#include<iostream>
#include<climits>
using namespace std;

struct Process {
    int pid;           // 进程ID
    int daotime;       // 到达时间
    int servetime;     // 服务时间
    int begintime;     // 开始时间
    int finishtime;    // 结束时间
    int turntime;      // 周转时间
    float quantime;    // 带权周转时间
    bool finished;     // 是否已完成
};

int main() {
    int n;
    cout << "输入进程数：";
    cin >> n;

    Process p[100];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cin >> p[i].daotime >> p[i].servetime;
        p[i].finished = false;
    }

    int currentTime = 0;       // 当前时间
    int completed = 0;         // 已完成进程数

    while (completed < n) {
        int shortest = -1;
        int minService = INT_MAX;

        // 从已到达且未完成的进程中选出服务时间最短的
        for (int i = 0; i < n; i++) {
            if (!p[i].finished && p[i].daotime <= currentTime) {
                if (p[i].servetime < minService) {
                    minService = p[i].servetime;
                    shortest = i;
                }
            }
        }

        if (shortest == -1) {
            // 当前无进程到达，跳到下一个最早到达时间
            int nextArrival = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (!p[i].finished && p[i].daotime < nextArrival) {
                    nextArrival = p[i].daotime;
                }
            }
            currentTime = nextArrival;
            continue;
        }

        // 执行选中的进程
        p[shortest].begintime = currentTime;
        p[shortest].finishtime = currentTime + p[shortest].servetime;
        p[shortest].turntime = p[shortest].finishtime - p[shortest].daotime;
        p[shortest].quantime = (float)p[shortest].turntime / p[shortest].servetime;

        currentTime = p[shortest].finishtime;
        p[shortest].finished = true;
        completed++;
    }

    // 按PID顺序输出结果
    cout << "PID\t到达\t服务\t开始\t结束\t周转\t带权周转\n";
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n",
            p[i].pid,
            p[i].daotime,
            p[i].servetime,
            p[i].begintime,
            p[i].finishtime,
            p[i].turntime,
            p[i].quantime);
    }

    return 0;
}