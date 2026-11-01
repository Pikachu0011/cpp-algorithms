//#include<bits/stdc++.h>
//using namespace std;
//const int N = 5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N][N];
//int dx[8] = { -1,-1,0,1,1,1,0,-1 };
//int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
//bool bian[N][N][N][N];//x1,y1 -> x2,y2
//bool vt[N][N];
//set<ll> se;
//int n,k;
//bool check(int i, int j) {
//	return i >= 0 && i <= n - 1 && j >= 0 && j <= n - 1;
//}
//vector<int> path, res;
//void dfs(int x,int y) {
//	if (!res.empty())return;
//	if (x == n - 1 && y == n - 1 && path.size() == n * n - 1) {
//		res = path;
//		return;
//	}
//	for (int i = 0; i < 8; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny) && a[nx][ny] == ((a[x][y] + 1) % k) && !bian[x][ny][nx][y] && !vt[nx][ny]) {
//			bian[x][y][nx][ny] = 1;
//			bian[nx][ny][x][y] = 1;
//			vt[nx][ny] = 1;
//			path.push_back(i);
//			dfs(nx, ny);
//			bian[x][y][nx][ny] = 0;
//			bian[nx][ny][x][y] = 0;
//			path.pop_back();
//			vt[nx][ny] = 0;
//		}
//	}
//}
//string s1, s2;
//void solve() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	vt[0][0] = 1;
//	dfs(0, 0);
//	if (!res.empty()) {
//		for (int i : res)cout << i;
//	}
//	else cout << -1;
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}