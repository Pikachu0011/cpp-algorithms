//#include<bits/stdc++.h>
//using namespace std;
//const int N = 3e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist1[N];
//int dists1[N];
//int dists2[N];
//bool vt[N];
//vector<int> G[N];
//int n, m;
//void bfs(int s, int* dist) {
//	queue<int> q;
//	q.push(s);
//	dist[s] = 0;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int i = 0; i < G[u].size(); i++) {
//			int v = G[u][i];
//			if (dist[v] > dist[u] + 1) {
//				dist[v] = dist[u] + 1;
//				q.push(v);
//			}
//		}
//	}
//}
//void solve() {
//	cin >> n >> m;
//	int tm = m;
//	while (tm--) {
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//	int s1, t1, s2, t2;
//	cin >> s1 >> t1 >> s2 >> t2;
//	memset(dist1, 0x3f, sizeof(dist1));
//	memset(dists1, 0x3f, sizeof(dists1));
//	memset(dists2, 0x3f, sizeof(dists2));
//	bfs(1, dist1);
//	if (dist1[s1] > t1 || dist1[s2] > t2) {
//		cout << "-1" << endl;
//		return;
//	}
//	bfs(s1, dists1);
//	bfs(s2, dists2);
//	int ans = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++) {
//		if (dist1[i] + dists1[i] < t1 && dist1[i] + dists2[i] < t2) {
//			ans = min(ans, dist1[i] + dists1[i] + dists2[i]);
//		}
//	}
//	cout << m - ans << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	//cin >> t;
//	t = 1;
//	while(t--)solve();
//	return 0;
//}
