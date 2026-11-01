//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//typedef long long ll;
//#define int long long          // 注意：此宏会将所有 int 替换为 long long，数组下标仍可用
//
//int n;
//
//struct node {
//    int id;   // 水果编号（1~n）
//    int c;    // 种类：0 桔子，1 苹果
//};
//node e[N];
//int l[N], r[N], idx;
//
//// 在节点 a 的右侧插入新节点 x
//void insert(int a, node x) {
//    e[idx] = x;
//    l[idx] = a, r[idx] = r[a];
//    l[r[a]] = idx, r[a] = idx++;
//}
//
//// 删除节点 a（a 不能是哨兵）
//void remove(int a) {
//    l[r[a]] = l[a];
//    r[l[a]] = r[a];
//}
//
//void solve() {
//    // 初始化双向链表：0 为头哨兵，1 为尾哨兵
//    r[0] = 1;
//    l[1] = 0;
//    idx = 2;      // 第一个数据节点从下标 2 开始
//
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        int s;
//        cin >> s;
//        node x = { i, s };
//        // 在链表末尾（即最后一个数据节点和尾哨兵之间）插入，保持输入顺序
//        insert(l[1], x);
//    }
//
//    // 循环直到链表为空（头哨兵的后继为尾哨兵）
//    while (r[0] != 1) {
//        vector<int> ids;      // 本轮取出的水果编号
//        vector<int> toDel;    // 本轮待删除的节点下标
//        int last_c = -1;      // 上一个选中块的种类，-1 保证首个节点一定被选
//
//        for (int i = r[0]; i != 1; i = r[i]) {
//            if (e[i].c != last_c) {
//                // 该节点是一个新块的最左水果
//                ids.push_back(e[i].id);
//                toDel.push_back(i);
//                last_c = e[i].c;
//            }
//        }
//
//        // 输出本轮果篮
//        for (size_t i = 0; i < ids.size(); ++i) {
//            if (i) cout << ' ';
//            cout << ids[i];
//        }
//        cout << '\n';
//
//        // 删除本轮选中的所有节点（删除后相邻同种类块会自动合并，下轮扫描会发现）
//        for (int id : toDel) {
//            remove(id);
//        }
//    }
//}
//
//signed main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    solve();
//    return 0;
//}