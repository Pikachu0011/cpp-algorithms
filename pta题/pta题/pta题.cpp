#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
using ll = long long;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++)cin >> a[i];

	sort(a.begin(), a.end());
	int Amax = a[n - 1];
	vector<int> dp(Amax + 1, 0);
	vector<int> pow2(n + 1, 0);
	pow2[0] = 1;
	for (int i = 1; i <= n; i++) {
		pow2[i] = (pow2[i - 1] * 2) % MOD;
	}
	int ans = 0;
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		int k = i;
		int num = pow2[i];
		int sum = 0;
		int j = a[i];
		for (int s = 0; s <= j; s++) {
			sum = (sum + dp[s]) % MOD;
		}
		int numg = (num - sum + MOD) % MOD;//>a[i] 的个数
		ans = (ans + numg) % MOD;
		//并入a[i]
		for (int s = Amax; s >= a[i]; s--) {
			dp[s] = (dp[s] + dp[s - a[i]]) % MOD;
		}

	}
	cout << ans << endl;
	return 0;
}