//#include<iostream>
//using namespace std;
//struct node {
//    string name;
//    int kai;
//    int fini;
//    int dao;
//    int fu;
//    int zhou;
//    double quan;
//    double rp;
//    bool finish;
//};
//node arr[1000];
//bool cmp1(node a, node b) {
//    return a.dao < b.dao;
//}
//int maxx(int a, int b) {
//    if (a > b)return a;
//    return b;
//}
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i].name;
//        arr[i].rp = 1;
//    }
//    int beg = 0;
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i].dao;
//        beg = min(beg, arr[i].dao);
//    }
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i].fu;
//    }
//    //sort(arr + 1,arr+1+n,cmp);
//    int com = 0;
//    while (com < n) {
//        int temp = -1;
//        double maxrp = -1;
//        for (int i = 1; i <= n; i++) {
//            if (!arr[i].finish && arr[i].dao <= beg) {
//                int wait = beg - arr[i].dao;
//                arr[i].rp = 1.0 + 1.0 * wait / arr[i].fu;
//            }
//        }
//        // 选最大响应比
//        for (int i = 1; i <= n; i++) {
//            if (!arr[i].finish && arr[i].dao <= beg && arr[i].rp > maxrp) {
//                maxrp = arr[i].rp;
//                temp = i;
//            }
//        }
//        if (temp == -1) {//无
//            int nex_dao = 1e9;
//            for (int i = 1; i <= n; i++) {
//                if (!arr[i].finish && arr[i].dao < nex_dao) {
//                    nex_dao = arr[i].dao;
//                }
//            }
//            beg = nex_dao;
//            continue;
//        }
//        arr[temp].kai = beg;
//        arr[temp].fini = beg + arr[temp].fu;
//        arr[temp].zhou = arr[temp].fini - arr[temp].dao;
//        arr[temp].quan = 1.0 * arr[temp].zhou / arr[temp].fu;
//        beg = arr[temp].fini;
//        arr[temp].finish = 1;
//
//        com++;
//    }
//    sort(arr + 1, arr + 1 + n, cmp1);
//    cout << "作 业 名：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        cout << arr[i].name;
//    }
//    cout << endl;
//    cout << "到达时间：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        cout << arr[i].dao;
//    }
//    cout << endl;
//    cout << "服务时间：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        cout << arr[i].fu;
//    }
//    cout << endl;
//    cout << "完成时间：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        cout << arr[i].fini;
//    }
//    cout << endl;
//    cout << "周转时间：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        cout << arr[i].zhou;
//    }
//    cout << endl;
//    cout << "带权周转时间：";
//    for (int i = 1; i <= n; i++) {
//        if (i != 1)cout << " ";
//        printf("%.2lf", arr[i].quan);
//    }
//    cout << endl;
//
//    return 0;
//}