#include<bits/stdc++.h>
using namespace std;
int dx[8] = { -1,1,0,0,-1,-1,1,1 };
int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
int n, m;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
queue<int> qx, qy;
char arr[1005][1005];
bool vt[1005][1005] = { 0 };
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];

	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 'W' && vt[i][j] == 0) {
				ans++;
				vt[i][j] = 1;
				qx.push(i);
				qy.push(j);

			}
			while (1) {
				int num = qx.size();
				if (num == 0) {
					break;
				}
				for (int ii = 1; ii <= num; ii++) {
					for (int jj = 0; jj < 8; jj++) {
						int nx = qx.front() + dx[jj];
						int ny = qy.front() + dy[jj];

						if (check(nx, ny) && arr[nx][ny] == 'W' && vt[nx][ny] == 0) {
							
							qx.push(nx);
							qy.push(ny);
							vt[nx][ny] = 1;
						}
					}
				}
				qx.pop();
				qy.pop();
			}

		}
	cout << ans << endl;
	return 0;
}
/*
********
********
********
********
*/