//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Process {//进程
//    int pid;//进程表示 
//    int daotime;//到达时间 
//    int servetime;//服务时间 
//    int begintime;//开始时间 
//    int finishtime;//结束时间 
//    int turntime;// 周转时间 
//    float quantime; //带权周转时间 
//};
//bool cmp(Process a, Process b) {
//    return a.daotime < b.daotime;
//}
//
//int main() {
//    int n;
//    cout << "输入进程数：";
//    cin >> n;
//
//    Process p[100];
//
//    for (int i = 0; i < n; i++) {
//        p[i].pid = i + 1;
//        cin >> p[i].daotime >> p[i].servetime;
//    }
//
//    sort(p, p + n, cmp);
//
//    int lastFinish = 0;
//    for (int i = 0; i < n; i++) {
//
//        if (lastFinish <= p[i].daotime)
//            p[i].begintime = p[i].daotime;
//        else
//            p[i].begintime = lastFinish;
//
//        p[i].finishtime = p[i].begintime + p[i].servetime;
//
//        p[i].turntime = p[i].finishtime - p[i].daotime;
//
//        p[i].quantime = 1.0 * p[i].turntime / p[i].servetime;
//
//        lastFinish = p[i].finishtime;
//    }
//
//    printf("PID\t到达\t服务\t开始\t结束\t周转\t带权周转\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n",
//            p[i].pid,
//            p[i].daotime,
//            p[i].servetime,
//            p[i].begintime,
//            p[i].finishtime,
//            p[i].turntime,
//            p[i].quantime);
//    }
//
//    return 0;
//}