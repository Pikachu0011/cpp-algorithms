#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int n, m, p1, p2;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
int h;
queue<int> qx, qy;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int main() {
	cin >> n >> m >> p1 >> p2;
	int ans = 1;
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= m; j++) 
			cin >> arr[i][j];
	int temp = arr[p1][p2];
	arr[p1][p2] = temp + 1;
	qx.push(p1);
	qy.push(p2);
	while (1) {
		int num = qx.size();
		if (num == 0)
			break;
		for (int i = 1; i <= num; i++) {
			for (int j = 0; j < 4; j++) {
				int nx = qx.front() + dx[j];
				int ny = qy.front() + dy[j];
				if (check(nx,ny) && arr[nx][ny] <= temp) {
					ans++;
					qx.push(nx);
					qy.push(ny);
					arr[nx][ny] = temp + 1;

				}
			}
		}
		qx.pop();
		qy.pop();
	}
	cout << ans << endl;

	return 0;
}