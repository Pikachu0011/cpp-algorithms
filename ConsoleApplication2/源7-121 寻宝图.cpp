//#include<bits/stdc++.h>
//using namespace std;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//queue<int> qx, qy;
//vector<vector<char>> arr;
//vector<vector<bool>> vt;
//int n, m;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//
//int main() {
//	cin >> n >> m;
//	arr.resize(n + 1, vector<char>(m + 1));//重点
//	vt.resize(n + 1, vector<bool>(m + 1, false));//重点
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> arr[i][j];
//			vt[i][j] = 0;
//		}
//	}
//	int dao_yu = 0;
//	int bao = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (vt[i][j] == 0 && arr[i][j] != '0') {
//				dao_yu++;
//				bool flag = 0;
//				if (arr[i][j] != '1')
//					flag = 1;
//				vt[i][j] = 1;
//				qx.push(i);
//				qy.push(j);
//				while (!qx.empty()) {
//					int num = qx.size();
//					for (int ii = 0; ii < num; ii++) {
//						for (int jj = 0; jj < 4; jj++) {
//							int nx = qx.front() + dx[jj];
//							int ny = qy.front() + dy[jj];
//							if (check(nx, ny) && !vt[nx][ny] && arr[nx][ny]!='0') {
//								if (arr[nx][ny] != '1')
//									flag = 1;
//								vt[nx][ny] = 1;
//								qx.push(nx);
//								qy.push(ny);
//							}
//						}
//						qx.pop();
//						qy.pop();
//						
//					}
//				}
//				if (flag)
//					bao++;
//			}
//		}
//	}
//	cout << dao_yu << " " << bao << endl;
//	return 0;
//}