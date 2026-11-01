//#include<bits/stdc++.h>
//using namespace std;
//int arr[7][7] = { 0 };
//int n, m, x, y, s, t;
//int dx[8] = { -1,-2,-2,-1,1,2,2,1 };
//int dy[8] = { -2,-1,1,2,-2,-1,1,2 };
//queue<int> qx, qy;
//int cnt = 0;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//int main() {
//	cin >> n >> m >> x >> y >> s >> t;
//	qx.push(x);
//	qy.push(y);
//	arr[x][y] = 1;
//	while (!qx.empty()) {
//		cnt++;
//		int size = qx.size();
//		for (int i = 1; i <= size; i++) {
//			for (int j = 0; j < 8; j++) {
//				int nx = qx.front() + dx[j];
//				int ny = qy.front() + dy[j];
//				if (nx == s && ny == t) {
//					cout << cnt << endl;
//					return 0;
//				}
//				if (check(nx, ny) && arr[nx][ny] == 0) {
//					arr[nx][ny] = 1;
//					qx.push(nx);
//					qy.push(ny);
//				}
//
//			}
//			qx.pop();
//			qy.pop();
//
//		}
//	}
//
//	return 0;
//}
//
///*
// 12345678
//1********
//2********
//3********
//4********
//6********
//7********
//*/
///*
//  x		y
//  -1	-2
//  -2	-1
//  -2	+1
//  -1	+2
//  +1	-2
//  +2	-1
//  +2	+1
//  +1	+2
//	   */
