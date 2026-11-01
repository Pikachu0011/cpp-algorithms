//#include<bits/stdc++.h>
//using namespace std;
//int arr[15][15];
//bool vt[15][15];
//int n;
//int dx[8] = { -1,1,0,0,-1,-1,1,1 };
//int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= n;
//
//}
//int cnt = 0;
//void dfs(int x, int y) {
//	if (x == 1 && y == n) {
//		cnt++;
//		return;
//	}
//		
//
//	for (int i = 0; i < 8; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && arr[nx][ny]==0 && vt[nx][ny]==0) {
//			vt[nx][ny] = 1;
//			dfs(nx, ny);
//			vt[nx][ny] = 0;
//		}
//	}
//
//}
//int main() {
//	cin >> n;
//	
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> arr[i][j];
//	vt[1][1] = 1;
//	dfs(1, 1);
//	cout << cnt << endl;
//
//	return 0;
//}