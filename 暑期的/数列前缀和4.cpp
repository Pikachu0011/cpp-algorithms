//#include<bits/stdc++.h>
//using namespace std;
//typedef long long int;
//const int N = 1e3 + 10;
////typedef long long ll;
////typedef pair<int, int> pii;
////set<int> se;
//int n,m,k;
//int a[N][N] = { 0 };
//string s1, s2;
//void solve() {
//	
//	cin >> n >> m;
//	//int k;
//	cin >> k;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//			a[i][j] = ((a[i - 1][j] + a[i][j - 1]) - a[i - 1][j - 1] + a[i][j]);
//		}
//	}
//	int ans = 0;
//	while (k--) {
//		int u, v, x, y;
//		cin >> u >> v >> x >> y;
//		ans ^= (a[x][y] + a[u-1][v-1] - a[u - 1][y] - a[x][v - 1]);
//	}
//	cout << ans << endl;
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--)solve();
//	return 0;
//}