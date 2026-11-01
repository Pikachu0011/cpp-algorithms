//#include<bits/stdc++.h>
//using namespace std;
//char arr[105][105];
//int vv[105][105] = { 0 };
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//queue<int> qx, qy;
//
//int n, m;
//int maxx = 0;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//
//int main() {
//	cin >> m >> n;//ÁÐ ÐÐ
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> arr[i][j];
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (arr[i][j]=='*' && vv[i][j] == 0) {
//				qx.push(i);
//				qy.push(j);
//				vv[i][j] = 1;
//			}
//			int ans = 1;
//			while (1) {
//
//				int num = qx.size();
//				if (num == 0) {
//					if (maxx < ans)
//						maxx = ans;
//					ans = 1;
//					break;
//				}
//				for (int ii = 1; ii <= num; ii++) {
//					for (int jj = 0; jj < 4; jj++) {
//						int nx = qx.front() + dx[jj];
//						int ny = qy.front() + dy[jj];
//						if ( arr[nx][ny]=='*'  && check(nx, ny) && vv[nx][ny] == 0) {
//							ans++;
//							qx.push(nx);
//							qy.push(ny);
//							vv[nx][ny] = 1;
//						}
//					}
//
//
//				}
//				qx.pop();
//				qy.pop();
//			}
//		}
//	}
//	cout << maxx << endl;
//	return 0;
//}