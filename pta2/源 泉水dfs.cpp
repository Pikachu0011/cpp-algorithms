#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int n, m, p1, p2;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
int h;
int temp;
int ans = 1;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny) && arr[nx][ny] <= temp) {
			ans++;
			arr[nx][ny] = temp + 1;
			dfs(nx, ny);
		}
	}
}
int main() {
	cin >> n >> m >> p1 >> p2;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
	 temp = arr[p1][p2];
	arr[p1][p2] = temp + 1;
	dfs(p1, p2);
	cout << ans << endl;

	return 0;
}