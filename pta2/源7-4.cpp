//#include<bits/stdc++.h>
//using namespace std;
//char arr[45][45];
//int dx[4] = { -1,1,0,0 };
//
//int dy[4] = { 0,0,-1,1 };
//int r, c;
//queue<int> qux;
//queue<int> quy;
//int cnt = 1;
//bool check(int x, int y) {
//	return x >= 1 && x <= r && y >= 1 && y <= c;
//}
//int main() {
//	qux.push(1);
//	quy.push(1);
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			cin >> arr[i][j];
//	arr[1][1] = '#';
//
//	while (!qux.empty()) {
//		cnt++;
//		int num = qux.size();
//		for (int j = 0; j < num; j++) {
//			
//			
//			for (int i = 0; i < 4; i++) {
//				int nx, ny;
//				nx = qux.front() + dx[i];
//				ny = quy.front() + dy[i];
//				if (nx == r && ny == c) {
//					cout << cnt << endl;
//					return 0;
//				}
//				if (check(nx, ny) && arr[nx][ny] == '.') {
//					qux.push(nx);
//					quy.push(ny);
//					arr[nx][ny] = '#';
//				}
//			}
//			qux.pop();
//			quy.pop();
//		}
//		
//
//	}
//
//
//
//	return 0;
//}