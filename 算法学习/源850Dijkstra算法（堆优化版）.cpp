//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1000010;
//typedef pair<int, int> PII;//æ‡¿Î ±ﬂµÿ÷∑
//priority_queue<PII, vector<PII>, greater<PII>> pq;
//int h[N], e[N], w[N], ne[N], idx;
//int dist[N];
//int n, m;
//bool st[N];
//
//void add(int a, int b, int c) {
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//
//int dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	pq.push({ 0,1 });
//	while (!pq.empty()) {
//		auto t = pq.top();
//		pq.pop();
//		int d = t.first, ver = t.second;
//		if (st[ver])continue;
//		st[ver] = 1;
//		for (int i = h[ver]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > d + w[i]) {
//				dist[j] = d + w[i];
//				pq.push({ dist[j], j });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)return -1;
//	else return dist[n];
//}
//
//int main() {
//	memset(h, -1, sizeof(h));
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	cout << dijkstra() << endl;
//	return 0;
//}