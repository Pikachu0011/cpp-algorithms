#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
vector<vector<char>> a(n, vector<char>(m));
int ans, res;//岛屿个数 有宝藏的岛屿个数
bool check(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}
bool flag;
void dfs(int i, int j) {
	if (a[i][j] > '1' && !flag) {
		flag = 1;
		res++;
	}
	a[i][j] = '0';
	for (int k = 0; k < 4; k++) {
		int nx = i + dx[k];
		int ny = j + dy[k];
		if (check(nx,ny) && a[nx][ny] != '0') {
			dfs(nx, ny);
		}
	}
}
void solve() {
	cin >> n >> m;
	a.resize(n+1);
	for (int i = 0; i < n; i++)a[i].resize(m+1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != '0') {
				flag = 0;
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans << " " << res << endl;
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