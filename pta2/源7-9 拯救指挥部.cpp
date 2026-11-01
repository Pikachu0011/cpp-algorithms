//#include<bits/stdc++.h>
//using namespace std;
//char arr[505][505];
//int x, y;
//bool check(int a, int b) {
//	return a >= 1 && a <= x && b >= 1 && b <= y;
//}
//bool check1(int a, int b) {
//	return (a == 1 || a == x || b == 1 || b == y);
//}
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//queue<int> qx, qy;
//int cnt = 0;
//int main() {
//	cin >> x >> y;
//	for (int i = 1; i <= x; i++)
//		for (int j = 1; j <= y; j++)
//			cin >> arr[i][j];
//	//qx.push(1);
//	//qy.push(1);
//	for (int i = 1; i <= x; i++) {
//		for (int j = 1; j <= y; j++) {
//			if (arr[i][j] == '0' && check1(i, j)) {
//				qx.push(i);
//				qy.push(j);
//				arr[i][j] = '*';
//			}
//			
//			while (!qx.empty()) {
//				int num = qx.size();
//				if (num == 0)
//					break;
//				for (int m = 1; m <= num; m++) {
//					for (int k = 0; k < 4; k++) {
//						int nx = qx.front() + dx[k];
//						int ny = qy.front() + dy[k];
//						if (check(nx, ny) && arr[nx][ny] == '0') {
//							arr[nx][ny] = '*';
//							qx.push(nx);
//							qy.push(ny);
//
//						}
//					}
//					qx.pop();
//					qy.pop();
//				}
//
//			}
//		}
//	}
//	for (int i = 1; i <= x; i++) {
//		for (int j = 1; j <= y; j++) {
//			if (arr[i][j] == '0')
//				cnt++;
//		}
//	}
//	cout << cnt << endl;
//	
//
//	return 0;
//}