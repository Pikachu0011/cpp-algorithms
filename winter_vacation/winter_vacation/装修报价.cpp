//#include<iostream>
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 10;
//const int MOD = 1e9 + 7;
//LL a[N];
//LL s[N];//前i个异或值
//LL mi[N];//3^i;
//LL n;
//
//int main() {
//	cin >> n;
//	mi[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		mi[i] = (mi[i - 1] * 3) % MOD;
//
//	}
//	LL ans = 0, s = 0;
//	for (int i = 1; i < n; i++) {
//		s ^= a[i];
//		ans = (ans + s * 2 % MOD * mi[n - i - 1] % MOD) % MOD;
//	}
//	s ^= a[n];
//	ans = (ans + s) % MOD;
//	cout << ans << endl;
//	
//
//	return 0;
//}