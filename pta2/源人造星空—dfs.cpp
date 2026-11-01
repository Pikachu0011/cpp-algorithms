//#include<bits/stdc++.h>
//using namespace std;
//int dx[12] = { -2,-1,-1,-1,0,0,0,0,1,1,1,2 };
//int dy[12] = { 0,-1,0,1,-2,-1,1,2,-1,0,1,0 };
//int n, m;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//char arr[105][105];
//int vv[105][105] = { 0 };
//void dfs(int x, int y) {
//
//	for (int i = 0; i < 12; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && arr[nx][ny] == '#') {
//			arr[nx][ny] = '-';
//			dfs(nx, ny);
//		}
//	}
//
//}
//int main() {
//
//	cin >> n >> m;
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			if (arr[i][j] == '#') {
//				arr[i][j] = '-';
//				res++;
//				dfs(i, j);
//			}
//		}
//	cout << res << endl;
//
//	return 0;
//}