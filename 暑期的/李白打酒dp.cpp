//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100 + 10,MOD = 1e9 + 7;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n,m;
//int f[N][N][N];
//string s1, s2;
//void solve() {
//	cin >> n >> m;
//	f[0][0][2] = 1;
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= m; j++) {
//			if (!i && !j)continue;
//			for (int k = 0; k <= m; k++) {
//				if (k % 2 == 0 && i)f[i][j][k] += f[i - 1][j][k / 2];
//				if (k + 1 <= m && j)f[i][j][k] += f[i][j - 1][k + 1];
//				f[i][j][k] %= MOD;
//			}
//		}
//	}
//	cout << f[n][m - 1][1];
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}