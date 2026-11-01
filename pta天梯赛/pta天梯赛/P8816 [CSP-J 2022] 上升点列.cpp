//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//#define int long long
//#define x first
//#define y second
//typedef pair<int, int> pii;
//set<int> se;
//pii a[N];
//int f[505][505];
//int n, k;
//void solve() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)cin >> a[i].x >> a[i].y;
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= k; j++)f[i][j] = j + 1;
//	}
//	for (int i = 2; i <= n; i++) {
//		for (int j = 1; j <= i - 1; j++) {
//			if (a[j].y > a[i].y)continue;
//			int d = a[i].x - a[j].x + a[i].y - a[j].y - 1;
//			for (int p = d; p <= k; p++)f[i][p] = max(f[i][p], f[j][p - d] + d + 1);
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++)ans = max(ans, f[i][k]);
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	//cin >> t;
//	t = 1;
//	while (t--)solve();
//	return 0;
//}
