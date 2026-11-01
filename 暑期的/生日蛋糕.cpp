#include<bits/stdc++.h>
using namespace std;
int ans = 2e9;
int n, m;
void dfs(int t, int s, int v, int lr, int lh) {
	if (s >= ans)return;
	if (t == m + 1 && v == n) {
		ans = min(ans, s);
		return;
	}
	if (v >= n)return;
	int k = m - t + 1;
	if (k * lr * lr * lh + v < n)return;//体积不满足了；
	if (k * 2 + s > ans)return;//最小面积比ans打了
	if (t == 1) {
		for (int r = lr; r >= m; r--) {
			for (int h = m; h <= lh; h++) {
				dfs(t + 1, s + r * r + 2 * r * h, v + r * r * h, r, h);
			}
		}
	}
	else {
		for (int r = lr - 1; r >= m - t + 1; r--) {
			for (int h = m - t + 1; h < lh; h++) {
				dfs(t + 1, s + 2 * r * h, v + r * r * h, r, h);
			}
		}
	}
}
int main() {
	cin >> n >> m;
	dfs(1, 0, 0, 30, 30);
	if (ans == 2e9)cout << 0 << "\n";
	else cout << ans << "\n";


	return 0;
}