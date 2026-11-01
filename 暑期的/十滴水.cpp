//#include<bits/stdc++.h>
//#include<unordered_map>
//using namespace std;
//typedef pair<int, int> PII;
//const int N = 300010;
//int l[N], r[N], w[N];
//unordered_map<int, int> pos;
//PII q[N];
//void solve() {
//	int c, m, n;
//	cin >> c >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		cin >> q[i].first >> q[i].second;
//	}
//	sort(q + 1, q + 1 + m);
//	for (int i = 1; i <= m; i++) {
//		l[i] = i - 1, r[i] = i + 1;
//		w[i] = q[i].second;
//		pos[q[i].first] = i;
//	}
//	int res = m;
//	for (int i = 1; i <= n; i++) {
//		int p;
//		cin >> p;
//		int k = pos[p];
//		w[k]++;
//		while (w[k] >= 5) {
//			res--;
//			int nk = 0;
//			int L = l[k], R = r[k];
//			w[L]++;
//			w[R]++;
//			r[L] = R, l[R] = L;
//			if (R <= m && w[R] >= 5)nk = R;
//			if (L && w[L] >= 5)nk = L;
//			k = nk;
//
//		}
//		cout << res << "\n";
//	}
//
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie();
//	solve();
//
//	return 0;
//}