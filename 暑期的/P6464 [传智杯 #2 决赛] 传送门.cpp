//#include<bits/stdc++.h>
//using namespace std;
//const int N = 200 + 10, M = 2e7, INF = 1e9;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int d[N][N],d1[N][N];//d1为原本的，对d做修改
//set<ll> se;
//int n, m;
//string s1, s2;
//void floyd() {
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//			}
//		}
//	}
//}
//void floyd1() {
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				d1[i][j] = min(d1[i][j], d1[i][k] + d1[k][j]);
//			}
//		}
//	}
//}
//void change() {
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			d[i][j] = d1[i][j];
//}
//void solve() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (i == j)d[i][j] = d1[i][j] = 0;
//			else d[i][j] = d1[i][j] = INF;
//	while (m--) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		d1[x][y] = d1[y][x] = d[x][y] = d[y][x] = min(d[x][y], z);
//	}
//	floyd();
//	floyd1();
//	int t1, t2;
//	int maxnum = 0, minnum = INF;
//	int mans = INF;
//	for (int i = 1; i < n; i++) {
//		for (int j = i + 1; j <= n; j++) {
//			change();
//			t1 = i, t2 = j;
//			d[t1][t2] = d[t2][t1] = 0;
//			for (int x = 1; x <= n; x++) {
//				for (int y = 1; y <= n; y++) {
//					if (d[x][y] == INF || d[x][y] > d[x][i] + d[i][y]) {
//						d[x][y] = d[x][i] + d[i][y];
//					}
//				}
//			}
//			for (int x = 1; x <= n; x++) {
//				for (int y = 1; y <= n; y++) {
//					if (d[x][y] == INF || d[x][y] > d[x][j] + d[j][y]) {
//						d[x][y] = d[x][j] + d[j][y];
//					}
//				}
//			}
//			int ans = 0;
//			for (int i = 1; i < n; i++) {
//				for (int j = i + 1; j <= n; j++) {
//					if (d[i][j] < INF / 2) {
//						ans += d[i][j];
//					}
//				}
//			}
//			mans = min(ans, mans);
//			
//		}
//		
//	}
//	cout << mans << endl;
//	
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}