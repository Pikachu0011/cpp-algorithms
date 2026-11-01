#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
char a[N][N];
bool vt[N][N];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

set<ll> se;
int n, m, k;

string s1, s2;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == '.';
}
void solve() {
	cin >> n >> m >> k;
	int x0, y0, d0;
	cin >> x0 >> y0 >> d0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			vt[i][j] = 0;
		}
	}
	vt[x0][y0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= k; i++) {
		int nx = x0 + dx[d0];
		int ny = y0 + dy[d0];
		if (check(nx, ny)) {
			x0 = nx, y0 = ny;
			vt[x0][y0] = 1;
		}
		else d0 = (d0 + 1) % 4;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (vt[i][j])ans++;
		}
	}
	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}