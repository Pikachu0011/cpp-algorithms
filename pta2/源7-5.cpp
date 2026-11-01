#include<bits/stdc++.h>
using namespace std;
int n, m, sum = 0;
char a[1005][1005];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
char vt[45][45];
queue<int> qx, qy;
bool check(int x, int y) {
	return (x >= 1 && x <= n && y >= 1 && y <= m);
}
int main() {
	cin >> n >> m;
	int sx, sy, ex, ey;
	for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) {
		cin >> a[i][j];
		vt[i][j] = a[i][j];
		if (a[i][j] == 'S') {
			sx = i;
			sy = j;
		}
		if (a[i][j] == 'T') {
			ex = i;
			ey = j;
		}
	}
	qx.push(sx);
	qy.push(sy);
	vt[sx][sy] = '#';
	int ans = 0;
	while (1) {
		int num = qx.size();
		ans++;
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < 4; j++) {
				int tx = qx.front() + dx[j];
				int ty = qy.front() + dy[j];
				if (tx == ex && ty == ey) {
					cout << ans << endl;
					return 0;
				}
				if (check(tx, ty) && vt[tx][ty] != '#') {
					qx.push(tx);
					qy.push(ty);
					vt[tx][ty] = '#';
				}
			}
			qx.pop();
			qy.pop();
		}
	}
	return 0;
}