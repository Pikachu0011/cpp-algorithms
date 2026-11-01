//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//const LL N = 1e7;
//const LL MOD = 1e9 + 7;
//LL dp[N];
//int T;
//void init() {
//	dp[1] = 7;
//	for (LL i = 2; i <= N; i++) {
//		dp[i] = (dp[i - 1] * 10 % MOD + 7) % MOD;
//	}
//
//}
//int main() {
//	
//	cin >> T;
//	init();
//	while (T--) {
//		LL n;
//		cin >> n;
//		cout << dp[n] << endl;
//	}
//
//	return 0;
//}