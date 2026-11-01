//#include<bits/stdc++.h>
//
//using namespace std;
//#define int long long 
//const int N = 200010;
//const int mod = 998244353;
//int arr[N];
//int sum[N];
//int zuhe(int n, int m) {
//	int sum1 = 1;//·Ö×Ó
//	for (int i = n; i >= n - m; i++) {
//		sum1 = sum1 * i % mod;
//	}
//	int sum2 = 1;//·ÖÄ¸
//	for (int i = 1; i <= m; i++) {
//		sum2 = sum2 * i % mod;
//	}
//	return sum1 / sum2;
//}
//
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	int all = sum[n];
//	int res = 0;
//	for (int i = 1; i <= n/2 + (n % 2 == 1 ); i++) {
//		if (i == 1)res += all;
//		else if(i < n / 2) {
//			res += zuhe(n, i) * all % mod;
//		}
//		else {
//			if (n % 2 == 0)res += (zuhe(n, i) * all) / 2 % mod;
//			else {
//				res += zuhe(n, i) * all % mod;
//			}
//		}
//
//	}
//	cout << res << endl;
//}
//signed main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie();
//	int t;
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//	return 0;
//}