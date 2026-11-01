#include<bits/stdc++.h>
using namespace std;
int dx[12] = { -2,-1,-1,-1,0,0,0,0,1,1,1,2 };
int dy[12] = { 0,-1,0,1,-2,-1,1,2,-1,0,1,0 };
int n, m;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
queue<int> qx, qy;

char arr[105][105];
int vv[105][105] = { 0 };
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == '#' && vv[i][j] == 0) {
				arr[i][j] = '-';
				vv[i][j] = 1;
				qx.push(i);
				qy.push(j);
				ans++;
				while (!qx.empty()) {
					int num = qx.size();
					for (int ii = 1; ii <= num; ii++) {
						for (int jj = 0; jj < 12; jj++) {
							int nx = qx.front() + dx[jj];
							int ny = qy.front() + dy[jj];
							if (check(nx,ny) && arr[nx][ny] == '#' && vv[nx][ny] == 0) {
								arr[nx][ny] = '-';
								vv[nx][ny] = 1;
								qx.push(nx);
								qy.push(ny);

							}
						}
						qx.pop();
						qy.pop();
					}
				}
			}
		}
	cout << ans << endl;
	return 0;
}