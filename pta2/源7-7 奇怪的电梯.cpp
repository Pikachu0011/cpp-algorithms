//#include<bits/stdc++.h>
//using namespace std;
//int n, a, b;
//int k[205];//上下层数
//int dao[205] = { 0 };//是否到达过
//bool check(int x) {
//	return x >= 1 && x <= n;
//
//}
//queue<int> que;
//int cnt = 0;
//int main() {
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++)
//		cin >> k[i];
//	que.push(a);
//	dao[a] = 1;
//	while (1) {
//		cnt++;
//		if (que.empty()) {
//			cout << "-1" << endl;
//			return 0;
//		}
//		int num = que.size();
//		for (int i = 1; i <= num; i++) {
//			int ta = que.front() + k[que.front()];
//			if (ta == b) {
//				cout << cnt << endl;
//				return 0;
//			}
//			if (check(ta) && dao[ta] == 0) {
//				dao[ta] = 1;
//				que.push(ta);
//			}
//			int ta2 = que.front() - k[que.front()];
//			if (ta2 == b) {
//				cout << cnt << endl;
//				return 0;
//			}
//			if (check(ta2) && dao[ta2] == 0) {
//				dao[ta2] = 1;
//				que.push(ta2);
//			}
//			que.pop();
//		}
//	}
//
//
//	return 0;
//}