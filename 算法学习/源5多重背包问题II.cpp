//#include<bits/stdc++.h>
//using namespace std;
//const int N = 12000, M = 2010;
//int f[M];
//int v[N], w[N];
//int n, m;
//int main() {
//	cin >> n >> m;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		int vv, ww, ss;
//		cin >> vv >> ww >> ss;
//		int k = 1;
//		while (k <= ss) {
//			cnt++;
//			v[cnt] = k * vv;
//			w[cnt] = k * ww;
//			ss -= k;
//			k *= 2;
//		}
//		if (ss > 0) {
//			cnt++;
//			v[cnt] = ss * vv;
//			w[cnt] = ss * ww;
//		}
//	}
//	n = cnt;
//	for (int i = 1; i <= n; i++)
//		for (int j = m; j >= v[i]; j--)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	cout << f[m];
//	return 0;
//}