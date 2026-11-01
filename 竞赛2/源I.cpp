//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> xx; // 红色苹果
//vector<int> yy; // 绿色苹果
//vector<int> ww; // 无色苹果
//
//priority_queue<int, vector<int>, greater<int>> pque; // 小顶堆（从小到大排序）
//
//int main() {
//    int x, y, a, b, c;
//    cin >> x >> y >> a >> b >> c;
//
//    // 输入红色苹果
//    for (int i = 0; i < a; i++) {
//        int temp;
//        cin >> temp;
//        xx.push_back(temp);
//    }
//    sort(xx.begin(), xx.end(), greater<int>()); // 从大到小排序
//
//    // 输入绿色苹果
//    for (int i = 0; i < b; i++) {
//        int temp;
//        cin >> temp;
//        yy.push_back(temp);
//    }
//    sort(yy.begin(), yy.end(), greater<int>()); // 从大到小排序
//
//    // 输入无色苹果
//    for (int i = 0; i < c; i++) {
//        int temp;
//        cin >> temp;
//        ww.push_back(temp);
//    }
//    sort(ww.begin(), ww.end(), greater<int>()); // 从大到小排序
//
//    // 将前 x 个红色苹果加入堆
//    for (int i = 0; i < x; i++) {
//        pque.push(xx[i]);
//    }
//
//    // 将前 y 个绿色苹果加入堆
//    for (int i = 0; i < y; i++) {
//        pque.push(yy[i]);
//    }
//
//    for (int i = 0; i < c; i++) {
//        if (ww[i] > pque.top()) {
//            pque.pop();
//            pque.push(ww[i]);
//        }
//    }
//
//   
//    long long sum = 0;
//    while (!pque.empty()) {
//        sum += pque.top();
//        pque.pop();
//    }
//
//    // 输出结果
//    cout << sum << endl;
//
//    return 0;
//}