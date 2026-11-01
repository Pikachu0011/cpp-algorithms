#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N],b[N];
int mb[N], mxa[N];

set<ll> se;
int n;
string s1, s2;
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];

	mb[0] = 1e9, mxa[n + 1] = 0;
	for (int i = 1; i <= n; i++)mb[i] = min(mb[i - 1], b[i]);
	for (int i = n; i >= 1; i--)mxa[i] = max(mxa[i + 1], a[i]);
	int ans = 0, ma = 1e9, mma = 1e9;
	for (int x = 1; x <= n; x++) {
		if (ma > a[x])mma = ma, ma = a[x];
		else if (mma > a[x])mma = a[x];
		if (min(max(mxa[x + 1], ma), mma) < mb[n - x + 1])break;
		ans = x;
	}
	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}