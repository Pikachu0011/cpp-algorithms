#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, x, y;
bool vis[N];
int a[N];
int f1[N], f2[N];
int cnt = 0;
bool flag;
bool check() {
	int ans1 = 0, ans2 = 0;
	for (int i = 1; i <= n; i++) f1[i] = 1;
	for (int i = 1; i <= n; i++) f2[i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j]) {
				f1[i] = max(f1[i], f1[j] + 1);

			}
			if (a[i] < a[j]) {
				f2[i] = max(f2[i], f2[j] + 1);

			}
			ans2 = max(ans2, f2[i]);
			ans1 = max(ans1, f1[i]);
		}
	}

	if (ans1 == x && ans2 == y) return 1;
	return 0;
}
void dfs(int u) {
	if (u >= n + 1) {
		if (check()) {
			flag = true;
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			a[u] = i;
			vis[i] = 1;
			dfs(u + 1);
			vis[i] = 0;
			a[u] = 0;
		}
	}
}
void solve()
{

	cin >> n >> x >> y;

	dfs(1);
	if (flag) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;

}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int _ = 1;
	cin >> _;
	while (_--) solve();
	return 0;
}