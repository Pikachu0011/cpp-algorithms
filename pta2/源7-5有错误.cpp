#include<bits/stdc++.h>
using namespace std;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int n, m;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
char arr[105][105];
queue<int> qx, qy;
int x1, y1, x2, y2;
int main() {
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'S') {
				x1 = i;
				y1 = j;
			}
			if (arr[i][j] == 'T') {
				x2 = i;
				y2 = j;
			}
		}
	}
	qx.push(x1);
	qy.push(y1);
	arr[x1][y1] = '#';  // 标记起点为已访问
	int cnt = 0;
	while (!qx.empty()) {
		int num = qx.size();
		cnt++;
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < 4; j++) {
				int nx = qx.front() + dx[j];
				int ny = qy.front() + dy[j];
				if (nx == x2 && ny == y2) {
					cout << cnt << endl;
					return 0;
				}
				if (check(nx, ny) && arr[nx][ny] != '#') {
					qx.push(nx);
					qy.push(ny);
					arr[nx][ny] = '#';
				}
			}
			qx.pop();
			qy.pop();
		}
	}
	return 0;
}
