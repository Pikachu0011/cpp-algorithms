//#include<bits/stdc++.h>
//using namespace std;
//struct xy {
//	int x;
//	int y;
//};
//int count = 1;
//int a[7][7] = { 0 };
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 };
//int n;
//int path[30][3];
//int cnt = 0;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= n;
//}
//void dfs(int x, int y,int step) {
//	path[step][1] = x;
//	path[step][2] = y;
//	
//	if (x == n && y == n) {
//		cnt++;
//		cout << cnt << ":";
//		for (int i = 1; i <= step; i++) {
//			
//			if (i != 1)cout << "->";
//			cout << path[i][1] << "," << path[i][2];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && a[nx][ny] == 0) {
//			a[nx][ny] = 1;
//			dfs(nx, ny, step + 1);
//			a[nx][ny] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	a[1][1] = 1;
//	dfs(1, 1, 1);
//
//	return 0;
//}