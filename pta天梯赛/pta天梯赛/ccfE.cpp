//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//#define int long long
//#define x first
//#define y second
//typedef pair<int, int> pii;
//set<int> se;
//vector<int> G[N];
//int f[N], cnt[N], add[N];
//int find(int x) {
//	if (f[x] != x) {
//		f[x] = find(f[x]);
//	}
//	return f[x];
//}
//void merge(int x, int y) {
//	int fx = find(x);
//	int fy = find(y);
//	if (fx != fy) {
//		f[fx] = fy;
//		cnt[fy] += cnt[fx];
//	}
//}
//struct node {
//	int idx;
//	int w;
//}nodes[N];
//int n, m, k;
//bool cmp(node a, node b) {
//	return a.w > b.w;
//}
//int ans;
//void solve() {
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++) {
//		f[i] = i;
//		cnt[i] = 1;
//		add[i] = 0;
//		cin >> nodes[i].w;
//		nodes[i].idx = i;
//	}
//	sort(nodes + 1, nodes + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)G[i].clear();
//	for (int i = 1; i <= m; i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u].push_back(v);
//		G[v].push_back(u);
//	}
//	ans = -1;
//	for (int i = 1; i <= n; i++) {
//		int id = nodes[i].idx;
//		int w = nodes[i].w;
//		add[id] = 1;
//		for (int v : G[id]) {
//			if (add[v])merge(v, id);
//		}
//		int root = find(id);
//		if (cnt[root] >= k) {
//			ans = w;
//			break;
//		}
//	}
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	//t = 1;
//	while (t--)solve();
//	return 0;
//}
