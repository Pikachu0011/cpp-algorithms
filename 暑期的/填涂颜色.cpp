#include<bits/stdc++.h>
using namespace std;
const int N = 50 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N][N];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
set<ll> se;
int n;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}
string s1, s2;
void dfs(int x, int y) {
	a[x][y] = 3;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny) && a[nx][ny] == 0) {
			dfs(nx, ny);
		}
	}
}
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int j = 1; j <= n; j++) {
		if (a[1][j] == 0)dfs(1, j);
		if (a[n][j] == 0)dfs(n, j);
	}
	for (int i = 1; i <= n; i++) {
		if (a[i][1] == 0)dfs(i, 1);
		if (a[i][n] == 0)dfs(i, n);
	}
	for (int i = 1; i <= n; i++) {
		bool flag = 0;
		for (int j = 1; j <= n; j++) {
			if (flag)cout << " ";
			else flag = 1;
			if (a[i][j] == 3)cout << 0;
			else if (a[i][j] == 0)cout << 2;
			else cout << 1;
		}
		cout << endl;
	}


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}