//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long LL;
//
//const int N = 50;
//LL g[N];
//LL ans = 0;
//LL w, n , k;
//int weights[1 << 24], cnt;
//
//void dfs1(LL u, LL s) {
//	if (u == k) {
//		weights[cnt++] = s;
//		return;
//	}
//	if (s + g[u] <= w)dfs1(u + 1, s + g[u]);
//	dfs1(u + 1, s);
//}
//
//void dfs2(LL u, LL s) {
//	if (u == n) {
//		LL l = 0, r = cnt - 1;
//		while (l < r) {
//			LL mid = l + r + 1 >> 1;
//			if (weights[mid] + s <= w)l = mid;
//			else r = mid - 1;
//		}
//		if (s + weights[r] <= w)ans = max(ans, s + weights[r]);
//		return;
//	}
//	if (s + g[u] <= w)dfs2(u + 1, s + g[u]);
//	dfs2(u + 1, s);
//	
//}
//
//int main() {
//	cin >> w >> n;
//	for (int i = 0; i < n; i++)cin >> g[i];
//	sort(g, g + n);
//	reverse(g, g + n);
//	k = n / 2 + 2;
//	dfs1(0, 0);
//	sort(weights, weights + cnt);
//	cnt = unique(weights, weights + cnt) - weights;
//	dfs2(k, 0);
//	cout << ans << endl;
//
//	return 0;
//}