//#include<bits/stdc++.h>
//using namespace std;
//const int N = 110 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;//bu 队伍
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//int m, n;
//int arr[N][N];
//bool vt[N][N];
//bool check(int i, int j) {
//	return i >= 1 && i <= m && j >= 1 && j <= n;
//}
//int bfs(int x, int y) {
//	queue<int>qx, qy;
//	memset(vt, 0, sizeof(vt));
//	qx.push(x), qy.push(y);
//	vt[x][y] = 1;
//	int cnt = 0;
//	while (!qx.empty()) {
//		int num = qx.size();
//		cnt++;
//		for (int i = 1; i <= num; i++) {
//			int tx = qx.front();
//			int ty = qy.front();
//			qx.pop(), qy.pop();
//			for (int j = 0; j < 4; j++) {
//				int nx = tx + dx[j], ny = ty + dy[j];
//				if (check(nx, ny) && !vt[nx][ny] && arr[nx][ny] != 0) {
//					if (arr[nx][ny] == 2)return cnt;
//					qx.push(nx), qy.push(ny);
//					vt[nx][ny] = 1;
//				}
//			}
//		}
//	}
//	return -1;
//
//}
//set<ll> se;
//void solve() {
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	int q;
//	cin >> q;
//	vector<pii> ans;//步数 队伍
//	map<int, int> mp;//步数  数量
//	for (int i = 1; i <= q; i++) {
//		int x, y;
//		cin >> x >> y;
//		int bu;
//		if (arr[x][y] == 2)bu = 0;
//		else {
//			bu = bfs(x, y);
//		}
//		if (bu != -1) {
//			ans.push_back({ bu,i });
//			mp[bu]++;
//		}
//	}
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++) {
//		auto t = ans[i];
//		cout << t.second << " " << t.first << endl;//队伍 步数
//	}
//	bool flag = 0;
//	for (int i = 0; i < ans.size(); i++) {
//		auto t = ans[i];
//		if (mp[t.second] == 1) {
//			flag = 1;
//			cout << t.second << " " << t.first << endl;//队伍 步数
//			break;
//		}
//	}
//	if (!flag)cout << "No winner.\n";
//}
//int main() {
//	solve();
//	return 0;
//}
