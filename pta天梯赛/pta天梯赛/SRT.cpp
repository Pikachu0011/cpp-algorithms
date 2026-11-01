#include <iostream>
#include <algorithm>
#include <iomanip>
#include <climits>
using namespace std;

// 原结构体（增加 remainTime 和 firstRun 字段）
struct Process {
    int pid;         // 进程ID
    int daotime;     // 到达时间
    int servetime;   // 服务时间（总执行时间）
    int begintime;   // 开始时间（第一次获得CPU的时间，即响应时间）
    int finishtime;  // 结束时间
    int turntime;    // 周转时间
    float quantime;  // 带权周转时间
    // 以下为 SRT 所需额外字段
    int remainTime;  // 剩余服务时间
    bool firstRun;   // 是否第一次运行
};

// SRT 调度主函数
void srtScheduling(Process p[], int n) {
    // 初始化额外字段
    for (int i = 0; i < n; i++) {
        p[i].remainTime = p[i].servetime;
        p[i].firstRun = true;
        p[i].begintime = 0;
    }

    int currentTime = 0;
    int completed = 0;
    int lastSelected = -1;   // 上次运行的进程下标
    int lastStartTime = 0;   // 上次开始运行的时间（用于计算等待时间增量）

    // 辅助函数：检查是否所有进程都已完成
    auto allCompleted = [&]() {
        for (int i = 0; i < n; i++)
            if (p[i].remainTime > 0) return false;
        return true;
        };

    while (completed < n) {
        // 1. 找出当前时间下，所有已到达且未完成的进程中，剩余时间最短的进程
        int selected = -1;
        int minRemain = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (p[i].remainTime > 0 && p[i].daotime <= currentTime) {
                if (p[i].remainTime < minRemain) {
                    minRemain = p[i].remainTime;
                    selected = i;
                }
            }
        }

        // 2. 如果没有可运行的进程（即所有未完成进程都还未到达），则跳到下一个到达时间
        if (selected == -1) {
            int nextArrival = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (p[i].remainTime > 0 && p[i].daotime < nextArrival) {
                    nextArrival = p[i].daotime;
                }
            }
            currentTime = nextArrival;
            continue;
        }

        // 3. 如果选中的进程与上次运行的进程不同，且上次运行的进程还未完成，则发生抢占
        // 实际上SRT是每次时钟到达或新进程到达时重新选择，这里通过循环每次重新选择模拟抢占。
        // 为了准确记录等待时间，我们只在进程切换时更新等待时间累加（最后统一计算周转-服务也可，但响应时间需单独记录）。

        // 记录首次开始时间（响应时间）
        if (p[selected].firstRun) {
            p[selected].begintime = currentTime;
            p[selected].firstRun = false;
        }

        // 执行选中的进程一个时间单位（为了模拟抢占，每次只运行1个单位时间，然后重新调度）
        // 更高效的方式是运行到下一个事件（新进程到达或当前进程结束），但为清晰起见，我们每次运行1个单位。
        // 但为了性能，可以计算到下一个事件的时间差。这里采用“每次运行1”的方法，适合教学且n不大。
        // 我们改为：运行到 min(当前进程完成时间, 下一个进程到达时间) 以提高效率，但逻辑稍复杂。
        // 为了精确模拟抢占，采用“时间驱动”方式：每次只执行 1 个时间单位，然后检查是否有新进程到达。

        // 方法：运行一个时间单位
        p[selected].remainTime--;
        currentTime++;

        // 如果该进程执行完后剩余时间为0，则完成
        if (p[selected].remainTime == 0) {
            p[selected].finishtime = currentTime;
            p[selected].turntime = p[selected].finishtime - p[selected].daotime;
            p[selected].quantime = (float)p[selected].turntime / p[selected].servetime;
            completed++;
        }
    }

    // 计算每个进程的等待时间（周转时间 - 服务时间）
    for (int i = 0; i < n; i++) {
        p[i].turntime = p[i].finishtime - p[i].daotime;
        p[i].quantime = (float)p[i].turntime / p[i].servetime;
    }
}

// 统计并输出结果（增加等待时间、响应时间列）
void printStatistics(Process p[], int n) {
    double sum_turn = 0, sum_weight = 0, sum_wait = 0, sum_response = 0;
    cout << left << setw(8) << "PID"
        << setw(12) << "到达"
        << setw(12) << "服务"
        << setw(12) << "响应"
        << setw(12) << "完成"
        << setw(12) << "周转"
        << setw(12) << "带权周转"
        << setw(12) << "等待" << endl;
    for (int i = 0; i < n; i++) {
        int wait = p[i].turntime - p[i].servetime;   // 等待时间
        int response = p[i].begintime - p[i].daotime; // 响应时间
        cout << setw(8) << p[i].pid
            << setw(12) << p[i].daotime
            << setw(12) << p[i].servetime
            << setw(12) << response
            << setw(12) << p[i].finishtime
            << setw(12) << p[i].turntime
            << setw(12) << fixed << setprecision(2) << p[i].quantime
            << setw(12) << wait << endl;
        sum_turn += p[i].turntime;
        sum_weight += p[i].quantime;
        sum_wait += wait;
        sum_response += response;
    }
    cout << "\n平均周转时间: " << fixed << setprecision(2) << sum_turn / n << endl;
    cout << "平均带权周转时间: " << sum_weight / n << endl;
    cout << "平均等待时间: " << sum_wait / n << endl;
    cout << "平均响应时间: " << sum_response / n << endl;
}

int main() {
    int n;
    cout << "输入进程数: ";
    cin >> n;
    Process p[100];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cin >> p[i].daotime >> p[i].servetime;
    }

    srtScheduling(p, n);
    cout << "\n========== SRT 调度结果 ==========" << endl;
    printStatistics(p, n);

    return 0;
}