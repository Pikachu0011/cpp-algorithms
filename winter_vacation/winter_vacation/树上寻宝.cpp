#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
int n, k;
vector<int> bian[N];
int w[N], vis[N], vt[N];
ll ans;
void dfs(int x, int dep) {
	if (dep > k * 2) {
		return;
	}
	if (!vis[x]) {
		ans += w[x];
		vis[x] = 1;
	}
	for (int i = 0; i < bian[x].size(); i++) {
		if (!vt[bian[x][i]]) {
			vt[bian[x][i]] = 1;
			dfs(bian[x][i], dep + 1);
			vt[bian[x][i]] = 0;
		}
	}
}
void solve() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)cin >> w[i];
	int b = n - 1;
	while (b--) {
		int a, b;
		cin >> a >> b;
		bian[a].push_back(b);
		bian[b].push_back(a);
	}
	dfs(1, 0);
	cout << ans;

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