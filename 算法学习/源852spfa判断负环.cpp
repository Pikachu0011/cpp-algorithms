//#include<bits/stdc++.h>
//using namespace std;
//const int N = 20010;
//int h[N], e[N], ne[N], w[N], idx;
//int n, m;
//int dist[N];
//int cnt[N];
//bool vt[N];
//void add(int a, int b, int c) {
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//bool spfa() {
//
//	queue<int> q;
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//		vt[i] = 1;
//	}
//	while (q.size()) {
//		int t = q.front();
//		q.pop();
//		vt[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i]) {
//				dist[j] = dist[t] + w[i];
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j] > n)return 1;
//				if (!vt[j]) {
//					q.push(j);
//					vt[j] = 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main() {
//
//	cin >> n >> m;
//	if (spfa())cout << "Yes\n";
//	else cout << "No\n";
//
//
//	return 0;
//}