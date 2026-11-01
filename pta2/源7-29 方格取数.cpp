//#include<bits/stdc++.h>
//using namespace std;
//int a[105][105];
//int n, m, s;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//int maxx = 0;
//int ans = 0;
//void dfs(int x, int y, int sum) {
//	if (sum > maxx)
//		maxx = sum;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && a[nx][ny] > a[x][y]) {
//			dfs(nx, ny, sum + a[nx][ny]);
//		}
//	}
//}
//int main() {
//	cin >> n >> m >> s;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= m; j++) {
//			s = (s * 345) % 19997;
//			a[i][j] = s % 10 + 1;
//		}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			maxx = 0;
//			dfs(i, j, a[i][j]);
//			ans = max(ans, maxx);
//		}
//
//	cout << ans;
//	return 0;
//}