#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10,INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int dist[N];
int vt[N];
int arr[N][N];
int n, m;
int dijkstra() {
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	priority_queue<pii,vector<pii>,greater<pii>> pq;//æ‡¿Î  ±‡∫≈
	pq.push({ 0,1 });
	while (!pq.empty()) {
		auto t = pq.top();
		pq.pop();
		int u = t.second;
		int d = t.first;
		if (vt[u])continue;
		vt[u] = 1;
		for (int i = 1; i <= n; i++) {
			if (arr[u][i] != INF) {
				//dist[i] = min(dist[i], dist[u] + arr[u][i]);
				if (dist[i] > dist[u] + arr[u][i]) {
					dist[i] = dist[u] + arr[u][i];
					pq.push({ dist[u] + arr[u][i], i });
				}
			}
		}
	}
	if (dist[n] == INF)return -1;
	else return dist[n];
}
void solve() {
	memset(arr, 0x3f, sizeof(arr));
	cin >> n >> m;
	int tn = m;
	while (m--) {
		int a, b, w;
		cin >> a >> b >> w;
		arr[a][b] = min(arr[a][b], w);
	}
	int t = dijkstra();
	cout << t << endl;
}
int main() {
	solve();



	return 0;
}
