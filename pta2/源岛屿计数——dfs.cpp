//#include<bits/stdc++.h>
//using namespace std;
//char arr[1005][1005];
//bool vt[1005][1005];
//int n,m;
//int dx[8] = { -1,1,0,0,-1,-1,1,1 };
//int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//
//}
//void dfs(int x, int y) {
//
//	for (int i = 0; i < 8; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && arr[nx][ny] == 'W') {
//			arr[nx][ny] = '.';
//			dfs(nx, ny);
//		}
//	}
//
//}
//int main() {
//	cin >> n >> m;
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (arr[i][j] == 'W') {
//				arr[i][j] = '.';
//				res++;
//				dfs(i, j);
//			}
//		}
//	cout << res << endl;
//
//	return 0;
//}