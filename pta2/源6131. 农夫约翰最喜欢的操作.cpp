//#include<bits/stdc++.h>
//using namespace std;
//const int N = 400010;
//typedef long long LL;
//int n, m;
//int w[N];
//LL s[N];
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		cin >> n >> m;
//		for (int i = 1; i <= n; i++) {
//			cin >> w[i];
//			w[i] %= m;
//		}
//		sort(w + 1, w + n + 1);
//		for (int i = 1; i <= n; i++)w[i + n] = w[i] + m;
//		for (int i = 1; i <= n * 2; i++) {
//			s[i] = s[i - 1] + w[i];
//		}
//		LL res = 1e18;
//		for (int l = 1; l <= n; l++) {
//			int r = l + n - 1, p = (l + r) / 2;
//			LL left = (p - l + 1) * (LL)w[p] - (s[p] - s[l - 1]);
//			LL right = (s[r] - s[p]) - (r - p) * (LL)w[p];
//			res = min(res, left + right);
//
//		}
//		cout << res << endl;
//
//
//	}
//
//	return 0;
//}