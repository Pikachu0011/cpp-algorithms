//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int N = 110;
//int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//bool st[N][N][4];
//int get_dir(int x1, int y1, int x2, int y2) {
//	for (int i = 0; i < 4; i++) {
//		if (x1 + dx[i] == x2 && y1 + dy[i] == y2)
//			return i;
//	}
//	return -1;
//}
//
//int get_score(int x1, int y1, int d) {
//	if (d > 1) {
//		x1 = x1 + dx[d], y1 = y1 + dy[d], d ^= 2;
//	}
//	int res = 0;
//	if (d == 0) { 
//		if (st[x1 - 1][y1][3] && st[x1][y1][3] && st[x1][y1 - 1][0])res++;
//		if (st[x1][y1][1] && st[x1 - 1][y1][1] && st[x1][y1 + 1][0])res++;
//	}
//	else {
//		if (st[x1][y1][0] && st[x1 - 1][y1][1] && st[x1][y1 + 1][0])res++;
//		if (st[x1 + 1][y1][0] && st[x1 + 1][y1][1] && st[x1 + 1][y1 + 1][0])res++;
//	}
//	return res;
//}
//int n, m, s;
//void solve() {
//	cin >> n >> m >> s;
//	int player = 0;
//	bool flag = 0;
//	int a = 0, b = 0;
//	for (int i = 1; i <= s; i++) {
//		int t, x1, y1, x2, y2;
//		cin >> t >> x1 >> y1 >> x2 >> y2;
//		int d = get_dir(x1, y1, x2, y2);
//		if (d == -1 || st[x1][y1][d] || t != player) {
//			flag = 1;
//			cout << i << " ";
//		}
//		else {
//			st[x1][y1][d] = st[x2][y2][d ^ 2] = 1;
//			int score = get_score(x1, y1, d);
//			if (score) {
//				if (!player) {
//					a += score;
//				}
//				else b += score;
//			}
//			else player ^= 1;
//		}
//	}
//	if (flag)cout << endl;
//	else cout << -1 << endl;
//	cout << !(a > b) << " " << max(a, b);
//
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	solve();
//	return 0;
//}