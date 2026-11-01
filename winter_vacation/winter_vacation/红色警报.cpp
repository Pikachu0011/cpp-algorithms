//#include<bits/stdc++.h>
//using namespace std;
//const int N = 510, M = 5010;
//int fa[N];
//int rela[N][N];
//int n, m, k;
//
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
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)fa[i] = i;
//	for (int i = 0; i < m; i++) {
//		int u, v;
//		cin >> u >> v;
//		rela[u][v] = rela[v][u] = 1;
//		_union(u, v);
//	}
//	cin >> k;
//	int cnt = 0, cnt1 = 0;
//	for (int i = 0; i < n; i++) {
//		if (fa[i] == i)cnt++;
//	}
//	for (int m = 1; m <= k; m++) {
//		int x;
//		cin >> x;
//		cnt1 = 0;
//		for (int i = 0; i < n; i++)fa[i] = i;
//		for (int i = 0; i < n; i++) {
//			if (rela[i][x] == 1) {
//				rela[i][x] = 0;
//				rela[x][i] = 0;
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (rela[i][j])_union(i, j);
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			if (find_x(i) == i)cnt1++;
//		}
//		
//		if(cnt1 > cnt + 1)cout << "Red Alert: City " << x << " is lost!\n";
//		else {
//			cout << "City " << x << " is lost.\n";
//		}
//		cnt = cnt1;
//	}
//	if (k == n)cout << "Game Over.\n";
//
//	return 0;
//}