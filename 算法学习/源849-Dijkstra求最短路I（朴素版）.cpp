#include<bits/stdc++.h>

using namespace std;
const int M = 510, N = 10010;
int g[N][N], vt[N];
int dist[N];

int n, m;
int dijkstra() {
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	for (int i = 1; i <= n; i++) {

		int t = -1;
		for (int j = 1; j <= n; j++) {
			if (vt[j] == 0 && (t == -1 || dist[t] > dist[j])) {
				t = j;
			}

		}
		vt[t] = 1;
		for (int j = 1; j <= n; j++) {
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		}


	}
	return dist[n];

}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j) {
				g[i][j] = 0x3f3f3f3f3f;
			}
			else g[i][j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		g[a][b] = min(g[a][b], c);
	}
	if (dijkstra() >= 0x3f3f3f3f / 2)cout << -1 << endl;
	else cout << dist[n] << endl;



	return 0;
}