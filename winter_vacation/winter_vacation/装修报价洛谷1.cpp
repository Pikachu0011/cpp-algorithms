#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, MOD = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> pii;
ll pow3[N], a[N];
set<ll> se;
void init() {
	pow3[0] = 1;
	for (int i = 1; i < N; i++) {
		pow3[i] = pow3[i - 1] * 3 % MOD;
	}
}

void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = a[i] ^ a[i - 1];
	}
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		ans = ans + a[i] * 2 % MOD * pow3[n - i - 1] % MOD;
	}
	ans = (ans + a[n]) % MOD;
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	init();
	while (t--)solve();



	return 0;
}