#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int p[N][N];
bool st[N][N];
int n, m;
typedef pair<int, int> pii;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
bool check_xy(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
bool check_er(int x, int y, int mid) {
	queue<pii> q;
	q.push({ x,y });
	while (!q.empty()) {
		auto t = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = t.first + dx[i];
			int ny = t.second + dy[i];
			if (check_xy(nx, ny) && !st[nx][ny] && p[nx][ny] <= mid) {
				st[nx][ny] = 1;
				if (nx == n)return true;
				q.push({ nx,ny });
			}
		}
	}
	return false;
}
int main() {
	cin >> n >> m;
	int l = 1e9, r = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> p[i][j];
			l = min(p[i][j], l);
			r = max(p[i][j], r);
		}
	int ans = 1e9;
	//二分查找最小值
	st[1][1] = 1;
	while (l < r) {
		int mid = (l + r) >> 1;
		memset(st, 0, sizeof(st));
		st[1][1] = 1;
		if (check_er(1, 1, mid)) {
			r = mid;
		}
		else l = mid + 1;
	}
	cout << l << endl;



	return 0;
}