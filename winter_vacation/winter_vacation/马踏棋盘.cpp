////123
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 400 + 10, INF = 1e8;
//typedef long long ll;
//typedef pair<int, int> pii;
//int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
//int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//int arr[N][N];
//bool vt[N][N];
//int n, m, x, y;
//bool check(int i, int j) {
//	return i >= 1 && i <= n && j >= 1 && j <= m;
//}
//void solve() {
//	cin >> n >> m >> x >> y;
//	queue<int> qx, qy;
//	qx.push(x), qy.push(y);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			arr[i][j] = INF;
//	arr[x][y] = 0;
//	vt[x][y] = 1;
//	int cnt = 0;
//	while (!qx.empty()) {
//		int num = qx.size();
//		cnt++;
//		for (int k = 1; k <= num; k++) {
//			int a = qx.front();
//			int b = qy.front();
//			qx.pop(), qy.pop();
//			for (int i = 0; i < 8; i++) {
//				int nx = a + dx[i];
//				int ny = b + dy[i];
//				if (check(nx, ny) && !vt[nx][ny]) {
//					vt[nx][ny] = 1;
//					//cout << nx << " " << ny << " " << cnt << endl;
//					arr[nx][ny] = min(cnt, arr[nx][ny]);
//					qx.push(nx);
//					qy.push(ny);
//				}
//			}
//		}
//	}
//	int nnn = -1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (arr[i][j] != INF)printf("%-5d", arr[i][j]);
//			else printf("%-5d", nnn);
//		}
//		cout << endl;
//	}
//
//}
//int main() {
//	// ios::sync_with_stdio(false);
//	// cin.tie(0);
//	// cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}