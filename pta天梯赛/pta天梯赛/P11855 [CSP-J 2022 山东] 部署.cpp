//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//#define int long long
//typedef pair<int, int> pii;
//set<int> se;
//int arr[N];
//vector<int> g[N];
//int son[N], con[N];
//int n, m, q;
//void dfs(int u, int fa) {
//	arr[u] += (son[u] + con[u]);
//	arr[fa] += con[u];
//	for (auto v : g[u]) {
//		if (v == fa)continue;
//		son[v] += son[u];
//		arr[v] += con[u];
//		dfs(v, u);
//	}
//}
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> arr[i];
//	for (int i = 1; i <= n - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		g[u].push_back(v);
//		g[v].push_back(u);
//	}
//	cin >> m;
//	for (int i = 1; i <= m; i++) {
//		int p, x, y;
//		cin >> p >> x >> y;
//		if (p == 1)son[x] += y;
//		else con[x] += y;
//	}
//	dfs(1, 0);
//	cin >> q;
//	while (q--) {
//		int x;
//		cin >> x;
//		cout << arr[x] << endl;
//	}
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
