//#include<bits/stdc++.h>
//using namespace std;
//int dx[4] = { -1,1,0,0 };
//
//int dy[4] = { 0,0,-1,1 };
//int n, m;
//char arr[105][105];
//bool vt[105][105];
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//void dfs(int x, int y) {
//	if (arr[x][y] == '.')
//		return;
//	for (int i = 0; i <= 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (check(nx, ny) && vt[nx][ny] == 0&& arr[nx][ny]=='W') {
//			vt[nx][ny] = 1;
//			dfs(nx, ny);
//			vt[nx][ny] = 1;
//		}
//	}
//}
//int main() {
//	int ans = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (vt[i][j] == 0 && arr[i][j] == 'W') {
//				ans++;
//				dfs(i, j);
//			}
//		}
//	cout << ans << endl;
//
//	return 0;
//}