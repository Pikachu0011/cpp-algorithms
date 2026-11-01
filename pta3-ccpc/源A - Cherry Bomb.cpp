//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 1000100;
//int a[N], b[N];
//
//void solve() {
//	int n, x;
//	cin >> n >> x;
//	int maxx = -99999;
//	int minn = 99999;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		maxx = max(maxx, a[i]);
//		minn = min(minn, a[i]);
//
//	}
//	int nn = -1;
//	bool flag = 1;
//	for (int i = 1; i <= n; i++) {
//		cin >> b[i];
//		if (b[i] != -1) {
//			if (nn == -1) {
//				nn = a[i] + b[i];
//			}
//			else {
//				if (a[i] + b[i] != nn) {
//					flag = 0;
//				}
//			}
//		}
//	}
//	if (!flag) {
//		cout << "0\n";
//		return;
//	}
//	if (nn != -1) {
//		for (int i = 1; i <= n; i++) {
//			if (nn - a[i]<0 || nn - a[i]>x) {
//				cout << "0\n";
//				return;
//			}
//		}
//	}
//	if (nn != -1) {
//		cout << "1\n";
//	}
//	else {
//		cout << x - (maxx - minn) + 1 << "\n";
//	}
//}
//int main() {
//	int t;
//	cin >> t;
//	while(t--)
//		solve();
//	return 0;
//}