////异或（同0异1）；
//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 100010, M = 31 * N;
//int son[M][2];
//int a[N];
//int idx;
//void insert(int num) {//插入
//	int p = 0;//根节点
//	for (int i = 30; i >= 0; i--) {
//		int u = num >> i & 1;
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//	}
//}
//int query(int num) {//查找
//	int p = 0;
//	int res = 0;
//	for (int i = 30; i >= 0; i--) {
//		
//		int u = num >> i & 1;
//		if (son[p][!u]) {
//			p = son[p][!u];
//			res = res * 2 + 1;
//			
//		}
//
//		else {
//			p = son[p][u];
//			res = res * 2 + 0;
//		}
//	}
//	return res;
//}
//int main() {
//	int n;
//	cin >> n;
//	int res = 0;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	for (int i = 0; i < n; i++) {
//		insert(a[i]);
//		int t = query(a[i]);
//		res = max(res, t ^ a[i]);
//	}
//	cout << res << endl;
//	
//
//
//	return 0;
//}