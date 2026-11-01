//#include<bits/stdc++.h>
//using namespace std;
//const int N = 10;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int a[N][N];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//set<ll> se;
//int n;
//string s1, s2;
//int ans = 10, cnt;
//int use[10][10];
//bool check(int x, int y) {
//	return x >= 1 && x <= 3 && y >= 1 && y <= 3;
//}
//bool check2() {
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//			if (a[i][j] == 0)return false;
//	return true;
//}
//void bian(int x, int y) {
//	a[x][y] = !a[x][y];
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (check(nx, ny))a[nx][ny] = !a[nx][ny];
//	}
//}
//void dfs(int num) {
//	/*for (int i = 1; i <= 3; i++)
//	{
//		for (int j = 1; j <= 3; j++)cout << a[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl << endl;*/
//	if (num > ans)return;
//	if (check2()) {
//		ans = min(ans, num);
//		return;
//	}
//	
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++) {
//			if (!use[i][j]) {
//				use[i][j] = 1;
//				bian(i, j);
//				dfs(num + 1);
//				use[i][j] = 0;
//				bian(i, j);
//			}
//		}
//
//}
//void solve() {
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)cin >> a[i][j];
//	dfs(0);
//	cout << ans << endl;
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	//cout << !1 << " " << !0 << endl;
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}