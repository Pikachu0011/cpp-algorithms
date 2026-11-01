#include<bits/stdc++.h>
using namespace std;
const int N = 2000 + 10,MOD = 1e9 + 7;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
vector<long long> fact(N + 1), invFact(N + 1);
string s1, s2;
long long modPow(long long a, long long e) {
	long long res = 1;
	while (e) {
		if (e & 1) res = res * a % MOD;
		a = a * a % MOD;
		e >>= 1;
	}
	return res;
}
void solve() {
	cin >> n;
	map<char, int> mp;
	for (int i = 1; i <= n; i++) {
		char c;
		cin >> c;
		mp[c]++;
	}
	int ji = 0;
	for (auto x : mp) {
		if (x.second % 2)ji++;
	}
	if (ji >= 2) {
		int num = 0;
		for (auto x : mp) {
			num += x.second;
		}
		int ans = fact[num];
		for (auto x : mp) {
			ans = ans * invFact[x.second] % MOD;
		}
		cout << ans << endl;
	}
	else {
		int num1 = 0;
		for (auto x : mp) {
			num1 += x.second;
		}
		int tnum1 = num1;
		num1 = fact[num1];
		for (auto x : mp) {
			num1 = num1 * invFact[x.second] % MOD;
		}
		int num2 = tnum1 / 2;
		num2 = fact[num2];
		for (auto x : mp) {
			num2 = num2 * invFact[x.second / 2] % MOD;
		}
		int ans = (num1 + MOD - num2) % MOD;

		cout << ans << endl;
	}

}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	fact[0] = 1;
	for (int i = 1; i <= N; i++) {
		fact[i] = fact[i - 1] * i % MOD;
	}
	// 2. 求最大阶乘的逆元 (费马小定理)
	invFact[N] = modPow(fact[N], MOD - 2);

	// 3. 倒推所有逆阶乘
	for (int i = N; i >= 1; i--) {
		invFact[i - 1] = invFact[i] * i % MOD;
	}
	while (t--)solve();
	return 0;
}