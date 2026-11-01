//#include<bits/stdc++.h>
//using namespace std;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int n;
//queue<int> qx, qy;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= n;
//}
//bool check1(int x, int y) {
//	return x == 1 || x == n || y == 1 || y == n;
//}
//int arr[35][35];
//int vv[35][35] = { 0 };
//void dfs(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && arr[nx][ny] == 0) {
//			arr[nx][ny] = 3;
//			dfs(nx, ny);
//		}
//	}
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> arr[i][j];
//		}
//
//	}
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= n; j++) {
//			if (check1(i, j) && arr[i][j] == 0) {
//				arr[i][j] = 3;
//				dfs(i, j);
//			}
//		}
//	
//	for (int i = 1; i <= n; i++) {
//
//		for (int j = 1; j <= n; j++) {
//
//			if (arr[i][j] == 0)
//				cout << "2 ";
//			else if (arr[i][j] == 3)
//				cout << "0 ";
//			else
//				cout << arr[i][j] << " ";
//
//
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}