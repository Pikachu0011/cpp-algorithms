//#include<bits/stdc++.h>
//using namespace std;
//const int N = 150100;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist[N];
//int vt[N];
//vector<int> arr[N];
//int n, m;
//map<pii, int> mp;
//int dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	//vt[1] = 1;
//	priority_queue<pii, vector<pii>, greater<pii>>pq;
//	pq.push({ 0,1 });
//	while (!pq.empty()) {
//		auto t = pq.top();
//		pq.pop();
//		int u = t.second;
//		int w = t.first;
//		if (vt[u])continue;
//		vt[u] = 1;
//		for (int i = 0; i < arr[u].size(); i++) {
//			int v = arr[u][i];
//			int d = mp[{u, v}];
//			if (dist[v] > dist[u] + d) {
//				dist[v] = dist[u] + d;
//				pq.push({ dist[v],v });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)return -1;
//	else return dist[n];
//}
//void solve() {
//	cin >> n >> m;
//	int tn = m;
//	while (tn--) {
//		int a, b, w;
//		cin >> a >> b >> w;
//		arr[a].push_back(b);
//		if (mp[{a, b}] == 0)mp[{a, b}] = w;
//		else mp[{a, b}] = min(mp[{a, b}], w);
//	}
//	int t = dijkstra();
//	cout << t << endl;
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
