//#include<bits/stdc++.h>
//using namespace std;
//int arr[100005];
//int dao[100005] = { 0 };
//queue<int> que;
//bool check(int x) {
//	return x >= 1 && x <= 100000;
//}
//int s = 0;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	if (n == m) {
//		cout << "0" << endl;
//		return 0;
//	}
//	que.push(n);
//	dao[n] = 1;
//	while (!que.empty()) {
//		s++;
//		int num = que.size();
//		for (int i = 1; i <= num; i++) {
//			
//			int n1 = que.front() + 1;
//			if (n1 == m) {
//				cout << s << endl;
//				return 0;
//			}
//			if (check(n1) && dao[n1] == 0) {
//				dao[n1] = 1;
//				que.push(n1);
//
//			}
//			int n2 = que.front() - 1;
//			if (n2 == m) {
//				cout << s << endl;
//				return 0;
//			}
//			if (check(n2) && dao[n2] == 0) {
//				dao[n2] = 1;
//				que.push(n2);
//
//			}
//			int n3 = que.front() * 2;
//			if (n3 == m) {
//				cout << s << endl;
//				return 0;
//			}
//			if (check(n3) && dao[n3] == 0) {
//				dao[n3] = 1;
//				que.push(n3);
//
//			}
//			que.pop();
//		}
//
//	}
//	return 0;
//}