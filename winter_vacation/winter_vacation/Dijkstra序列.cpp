//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int n, m;
//int g[N][N];
//int dist[N];
//bool st[N];
//int p[N];
//set<ll> se;
//bool dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	memset(st, 0, sizeof(st));
//	dist[p[0]] = 0;
//	for (int i = 0; i < n; i++) {
//		int t = p[i];
//		for (int j = 1; j <= n; j++) {
//			if (!st[j] && dist[j] < dist[t]) {
//				return false;
//			}
//		}
//		st[t] = true;
//		for (int j = 1; j <= n; j++) {
//			dist[j] = min(dist[j], g[t][j] + dist[t]);
//		}
//
//	}
//	return true;
//}
//void solve() {
//	cin >> n >> m;
//	memset(g, 0x3f, sizeof(g));
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a][b] = g[b][a] = c;
//	}
//	int k;
//	cin >> k;
//	while (k--) {
//		for (int i = 0; i < n; i++)cin >> p[i];
//		if (dijkstra())cout << "Yes\n";
//		else cout << "No\n";
//	}
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}