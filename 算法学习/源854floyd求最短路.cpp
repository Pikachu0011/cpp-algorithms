//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 210;
//const int INF = 1e9;
//int g[N][N];
//
//int n, m, k;
//void floyd() {
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
//
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (i == j)g[i][j] = 0;
//			else g[i][j] = INF;
//	for (int i = 1; i <= m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == b) {
//			
//			continue;
//		}
//		g[a][b] = min(g[a][b], c);
//
//	}
//	floyd();
//	while (k--) {
//		int x, y;
//		cin >> x >> y;
//		if (g[x][y] > INF / 2)cout << "impossible\n";
//		else cout << g[x][y] << endl;
//	}
//	return 0;
//}