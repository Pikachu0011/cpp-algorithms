#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 45;
int m, n;
int g[N];
int cnt;
int weights[1 << 24];
int ans;
int k;//中间分割点
void dfs_1(int u, int s) {
	if (u == k) {
		weights[cnt++] = s;
		return;
	}
	if ((LL)s + g[u] <= m)dfs_1(u + 1, s + g[u]);
	dfs_1(u + 1, s);
}
void dfs_2(int u, int s) {
	if (u == n) {
		//二分
		int l = 0, r = cnt - 1;
		while (l < r) {
			int mid = (l + r + 1) / 2;
			if ((LL)weights[mid] + s <= m)l = mid;
			else r = mid - 1;
		}
		if ((LL)s + weights[l] <= m)ans = max(ans, s + weights[l]);

		return;
	}
	if ((LL)s + g[u] <= m)dfs_2(u + 1, s + g[u]);
	dfs_2(u + 1, s);
}
void solve() {
	cin >> m >> n;
	for (int i = 0; i < n; i++)cin >> g[i];
	sort(g, g + n);
	reverse(g, g + n);
	k = n / 2 + 2;
	dfs_1(0, 0);//将前半部分所有的可能组合出来的数据初始化weights
	sort(weights, weights + cnt);
	cnt = unique(weights, weights + cnt) - weights;
	dfs_2(k, 0);
	cout << ans << endl;

}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie();
	solve();

	return 0;
}