#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1010;
struct state {
	int x, y, s;
};
int n, m;
char g[N][N];
int q;
int dist[N][N][3];
queue<state> qu;
bool check(int x, int y, string c) {
	for (int i = 0; c[i]; i++)
		if (g[x][y] == c[i])return true;
	return false;
}
void bfs() {
	state next[3][4] = {
		{{-2,0,2},{0,1,1},{1,0,2},{0,-2,1}},
		{{-1,0,1},{0,2,0},{1,0,1},{0,-1,0}},
		{{-1,0,0},{0,1,2},{2,0,0},{0,-1,2}}
	};
	memset(dist, -1, sizeof(dist));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (g[i][j] == '3') {
				qu.push({ i,j,0 });
				dist[i][j][0] = 0;
			}
		}
	}
	while (!qu.empty()) {
		auto t = qu.front();
		qu.pop();
		int d = t.s;
		int x = t.x, y = t.y;
		for (int i = 0; i < 4; i++) {
			int nx = x + next[d][i].x, ny = y + next[d][i].y, s = next[d][i].s;
			if (s == 0 && !check(nx, ny, "1"))continue;
			if (s == 1 && (!check(nx, ny, "123") || !check(nx, ny + 1, "123")))continue;
			if (s == 2 && (!check(nx, ny, "123") || !check(nx + 1, ny, "123")))continue;
			if (dist[nx][ny][s] == -1) {
				dist[nx][ny][s] = dist[x][y][d] + 1;
				qu.push({ nx,ny,s });
			}
		}
	}
}
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];
	bfs();
	cin >> q;
	while (q--) {
		int x, y, s;
		cin >> x >> y >> s;
		cout << dist[x][y][s] << endl;
	}


}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();

	return 0;
}