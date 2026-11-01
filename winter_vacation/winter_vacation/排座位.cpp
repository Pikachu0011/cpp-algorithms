//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e2 + 10;
//int fa[N];
//int rela[N][N];
//int n, m, k;
//int find_x(int x) {
//	return fa[x] == x ? x : fa[x] = find_x(fa[x]);
//}
//void _union(int a, int b) {
//	int root_a = find_x(a);
//	int root_b = find_x(b);
//	if (root_a != root_b) {
//		fa[root_a] = root_b;
//	}
//}
//
//int main() {
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)fa[i] = i;
//	for (int i = 1; i <= m; i++) {
//		int u, v, r;
//		cin >> u >> v >> r;
//		if (r == 1) {
//			_union(u, v);
//		}
//		else {
//			rela[u][v] = rela[v][u] = 1;
//		}
//	}
//	for (int i = 1; i <= k; i++) {
//		int u, v;
//		cin >> u >> v;
//		int root_u = find_x(u);
//		int root_v = find_x(v);
//		if (root_u == root_v && !rela[u][v]) {
//			cout << "No problem\n";
//		}
//		else if (root_u != root_v && !rela[u][v]) {
//			cout << "OK\n";
//		}
//		else if (rela[u][v] && root_u == root_v) {
//			cout << "OK but...\n";
//		}
//		else cout << "No way\n";
//	}
//
//
//
//	return 0;
//}