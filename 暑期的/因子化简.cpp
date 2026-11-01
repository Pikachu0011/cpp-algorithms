//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//void solve() {
//	int q;
//	cin >> q;
//	while (q--) {
//		int n, k;
//		cin >> n >> k;
//		//cout << n << k << endl;
//		map<int, int> mp;
//		for (int i = 2; i <= n / i; i++) {
//			if (n % i == 0) {
//				int t = 0;
//				while (n % i == 0) {
//					t++;
//					n /= i;
//				}
//				if (t >= k)mp[i] = t;
//			}
//		}
//		//if (n > 1)mp[n] = 1;
//		int res = 1;
//		for (auto i : mp) {
//			//cout << i.first << " " << i.second << endl;
//			res *= pow(i.first, i.second);
//		}
//		cout << res << "\n";
//	}
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie();
//	solve();
//
//	return 0;
//}