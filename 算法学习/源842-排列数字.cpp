//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 10;
//int a[N];
//bool vt[N];
//int n;
//void dfs(int u) {
//	if (u == n) {
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!vt[i]) {
//			a[u] = i;
//			vt[i] = 1;
//			dfs(u + 1);
//			vt[i] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	dfs(0);
//
//
//
//	return 0;
//}