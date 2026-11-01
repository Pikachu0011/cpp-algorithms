//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<vector>
//using namespace std;
//const int N = 1e4 + 10;
//vector<int>v[N], ve, ans;
//int vis[N], v1[N];
//void dfs(int p, int root) {
//	ve.push_back(p);
//	vis[p] = 1;
//	if (ve.size() > ans.size()) {
//		ans = ve;
//	}
//	else if (ve.size() == ans.size()) {
//		int f = 0;
//		for (int i = 0; i < ve.size(); i++) {
//			if (ve[i] > ans[i]) {
//				f = 1;
//				break;
//			}
//			else if (ve[i] < ans[i]) {
//				break;
//			}
//		}
//		if (f == 0) {
//			ans = ve;
//		}
//	}
//	if (v1[root] && v1[root] + ve.size() < ans.size()) return;
//	for (int i = 0; i < v[p].size(); i++) {
//		int to = v[p][i];
//		if (vis[to] == 0) {
//			dfs(to, root);
//		}
//	}
//	vis[p] = 0;
//	ve.pop_back();
//}
//int main() {
//	int n, st, k, x;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		while (k--) {
//			scanf("%d", &x);
//			v[i].push_back(x);
//			v1[x] = 1;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (v1[i] == 0)
//			dfs(i, i);
//	}
//	printf("%d\n", ans.size());
//	for (int i = 0; i < ans.size(); i++) {
//		if (i) printf(" ");
//		printf("%d", ans[i]);
//	}
//	return 0;
//}
