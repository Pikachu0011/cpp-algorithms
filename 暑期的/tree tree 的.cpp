#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 11;
set<int> bian[N];
int dist[N];
int d1, d2;
void dfs(int u, int distance) {
	dist[u] = distance;
	for (auto i : bian[u]) {
		if (dist[i]) {
			int d = dist[u] - dist[i] + 1;
			if (d > d1)d2 = d1, d1 = d;
			else if (d > d2 && d < d1)d2 = d;
		}
		else dfs(i, distance + 1);
	}
	dist[u] = 0;
}
void solve() {
	int T;
	cin >> T;
	while (T--) {
		for (auto i : bian)i.clear();
		int n, m;
		cin >> n >> m;
		d1 = 1, d2 = 0;
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			if (x == y)continue;
			d1 = 2, d2 = 1;
			bian[x].insert(y), bian[y].insert(x);
		}
		for (int i = 1; i <= n; i++) {
			dfs(i, 1);
		}
		cout << d1 << " " << d2 << endl;
	}


}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();

	return 0;
}