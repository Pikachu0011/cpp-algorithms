#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
int dp[32];
int ans;
string s1, s2;
void solve() {
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		int len = 1;
		for (int bit = 0; bit < 32; bit++) {
			if (x & (1 << bit))len = max(len, dp[bit] + 1);
		}
		for (int bit = 0; bit < 32; bit++) {
			if (x & (1 << bit))dp[bit] = max(dp[bit], len);
		}
		ans = max(len, ans);
	}
	cout << ans << endl;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}