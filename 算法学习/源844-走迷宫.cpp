#include<bits/stdc++.h>

using namespace std;
const int N = 110;
int g[N][N], d[N][N];
int n, m;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
bool check(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}
queue<int> qx, qy;

int bfs() {
	while (!qx.empty()) {
		auto tx = qx.front(), ty = qy.front();
		qx.pop();
		qy.pop();
			for (int i = 0; i < 4; i++) {
				int nx = tx + dx[i];
				int ny = ty + dy[i];
				if (check(nx, ny) && g[nx][ny] == 0 && d[nx][ny] == -1) {
					d[nx][ny] = d[tx][ty] + 1;
					if (nx == n - 1 && ny == m - 1) return d[nx][ny]; // 提前终止
					qx.push(nx);
					qy.push(ny);
				}
			}
			
		
		
	}
	return d[n - 1][m - 1];
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> g[i][j];
	
	qx.push(0);
	qy.push(0);
	memset(d, -1, sizeof d); //将d数组所有元素初始化为-1
	d[0][0] = 0;
	cout<<bfs();


	return 0;
}