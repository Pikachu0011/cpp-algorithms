//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//using pii = pair<int, int>;   // (值, 下标)
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int T;
//    cin >> T;
//    while (T--) {
//        int n;
//        ll S;
//        cin >> n >> S;
//
//        vector<int> A(n + 1), B(n + 1), C(n + 1);
//        for (int i = 1; i <= n; ++i) cin >> A[i];
//        for (int i = 1; i <= n; ++i) cin >> B[i];
//        for (int i = 1; i <= n; ++i) cin >> C[i];
//
//        // 最大堆维护 A 的最大值，按 A 值降序，值相同按下标任意
//        priority_queue<pii> maxHeap;
//        // 最小堆维护 B
//        priority_queue<pii, vector<pii>, greater<pii>> minHeap;
//
//        ll sumC = 0;          // 当前窗口内 C 的总和
//        int L = 1;            // 左指针
//        int ans = 0;          // 最长合法区间长度
//
//        for (int R = 1; R <= n; ++R) {
//            // 将新元素加入窗口
//            maxHeap.push({ A[R],R });
//            minHeap.push({ B[R],R });
//            sumC += C[R];
//
//            // 当窗口不满足任一条件时，不断右移左指针
//            while (L <= R && (sumC > S ||
//                (!maxHeap.empty() && !minHeap.empty() && A[maxHeap.top().second] > B[minHeap.top().second]))) {
//                // 从和中移除 C[L]
//                sumC -= C[L];
//                ++L;   // 左指针右移，堆中的元素可能因此过期
//
//                // 清理两个堆中所有下标小于当前 L 的过期元素
//                while (!maxHeap.empty() && maxHeap.top().second < L)
//                    maxHeap.pop();
//                while (!minHeap.empty() && minHeap.top().second < L)
//                    minHeap.pop();
//            }
//
//            // 此时窗口一定合法，更新答案
//            if (L <= R) {
//                ans = max(ans, R - L + 1);
//            }
//        }
//
//        cout << ans << endl;
//    }
//
//    return 0;
//}