//122
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
bool vis[N];
set<ll> se;
int n, A, B;
bool check(int x) {
	return x >= 1 && x <= n;
}
void solve() {
	cin >> n >> A >> B;
	for (int i = 1; i <= n; i++)cin >> a[i];
	queue<int> q;
	q.push(A);
	vis[A] = 1;
	int num = 0;
	int ans = -1;
	while (!q.empty()) {
		int cnt = q.size();
		for (int i = 1; i <= cnt; i++) {
			int t = q.front();
			q.pop();
			if (t == B) {
				ans = num;
				break;
			}
			if (check(t + a[t]) && !vis[t + a[t]]) {
				q.push(t + a[t]);
				vis[t + a[t]] = 1;
			}
			if (check(t - a[t]) && !vis[t + a[t]]) {
				q.push(t - a[t]);
				vis[t - a[t]] = 1;
			}
		}
		num++;
		if (ans != -1)break;
	}
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}