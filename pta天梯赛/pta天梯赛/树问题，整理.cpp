//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//#define int long long
//#define x first
//#define y second
//typedef pair<int, int> pii;
//set<int> se;
//vector<int> G[N];
//int w[N];
//int ans;
//int siz[N];
//int con[N];
//void dfs_size(int u) {
//	siz[u] = 1;
//	for (int v : G[u]) {
//		dfs_size(v);
//		siz[u] += siz[v];
//	}
//}
//void dfs(int u) {
//	int need = w[u] ^ con[u];
//	ans += siz[u] * need;
//	con[u] ^= need;
//	for (int v : G[u]) {
//		con[v] = con[u];
//		dfs(v);
//	}
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> w[i];
//	for (int i = 2; i <= n; i++) {
//		int f;
//		cin >> f;
//		G[f].push_back(i);
//	}
//	dfs_size(1);
//	dfs(1);
//
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	//cin >> t;
//	t = 1;
//	while (t--)solve();
//	return 0;
//}
//
