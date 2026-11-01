#include<bits/stdc++.h>
using namespace std;
char arr[1005][1005];

int n, m;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
queue<int> qx, qy;

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	while (m--) {
		int ans = 1;
		bool vv[1005][1005] = { 0 };
		int p1, p2;
		cin >> p1 >> p2;
		qx.push(p1);
		qy.push(p2);
		vv[p1][p2] = 1;
		while (1) {
			int num = qx.size();
			if (num == 0)
				break;
			for (int i = 1; i <= num; i++) {
				for (int j = 0; j < 4; j++) {
					int nx = qx.front() + dx[j];
					int ny = qy.front() + dy[j];
					char g;
					g = arr[qx.front()][qy.front()] == '0' ? '1' : '0';
					/*if (arr[qx.front()][qy.front()] == '0')
						g = '1';
					else
						g = '0';*/
					if (check(nx, ny) && vv[nx][ny] == 0 && arr[nx][ny] == g) {
						ans++;
						qx.push(nx);
						qy.push(ny);
						vv[nx][ny] = 1;
					}
				}
			}
			qx.pop();
			qy.pop();
		}
		cout << ans << endl;

	}
	return 0;
}