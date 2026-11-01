//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 100010;
//int idx;
//int e[N], l[N], r[N];
//int hh, tal;
//void add_r(int k, int x) {//在位置k右面插入x，（在左面插为add_r(l[k]),x）;
//
//    e[idx] = x;
//    r[idx] = r[k];
//    l[idx] = k;
//    l[r[k]] = idx;
//    r[k] = idx;
//    idx++;
//}
//void del(int k) {//删除第k个插入的数
//
//    r[l[k]] = r[k];
//    l[r[k]] = l[k];
//}
//
//
//int main() {
//    cin.tie();
//    ios::sync_with_stdio(false);
//
//    int m;
//    cin >> m;
//    //0是左端点，1是右端点
//    r[0] = 1;
//    l[1] = 0;
//    idx = 2;
//    while (m--) {
//        string c;
//        cin >> c;
//        if (c == "L") {
//            int x;
//            cin >> x;
//            add_r(0, x);
//        }
//        else if (c == "R") {
//            int x;
//            cin >> x;
//            add_r(l[1], x);
//        }
//        else if (c == "D") {
//            int k;
//            cin >> k;
//            del(k + 1);
//        }
//        else if (c == "IL") {
//            int k, x;
//            cin >> k >> x;
//            add_r(l[k + 1], x);
//        }
//        else if (c == "IR") {
//            int k, x;
//            cin >> k >> x;
//            add_r(k + 1, x);
//        }
//    }
//    for (int i = r[0]; i != 1; i = r[i]) {
//        cout << e[i] << " ";
//    }
//
//
//    return 0;
//}