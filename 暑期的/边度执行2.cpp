//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int N = 200010;
//typedef pair<int, int> PII;
//int a[N];
//int dp[N];
//void solve() {
//	int t;
//	cin >> t;
//	
//	while (t--) {
//		map<int, int> mp;
//		int n, x, y;
//		cin >> n >> x >> y;
//		vector<int> maxx;
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i];
//			mp[a[i]]++;//数字  数量
//		}
//		sort(a + 1, a + 1 + n);
//		int max_num = 0;
//		for (auto i : mp) {
//			if (i.second > max_num) {
//				maxx.clear();
//				max_num = i.second;
//			}
//			if (i.second == max_num) {
//				maxx.push_back(i.second);
//			}
//			//cout << "数字 数量 " << i.first << " " << i.second << endl;
//		}
//		//cout << "mac_num " << max_num << endl;
//		//cout << min(a[n] * x, (n - max_num) * y) << endl;
//		//dp[0] = min(a[n] * x, (n - mp[0]) * y);
//		dp[a[n]] = (n - mp[a[n]]) * y;
//		int ans = dp[a[n]];
//		//cout << "dpan  " << ans << endl;
//		for (int i = n - 1; i >= 1; i--) {
//			
//			dp[a[i]] = min(dp[a[i + 1]] + (a[i + 1] - a[i]) * x, (n - mp[a[i]]) * y);
//			if (a[i] == 0) dp[a[i]] = min(dp[a[i]], a[n] * x);
//			//cout <<"zhong  "<< a[i] << " " << dp[a[i]] << endl;
//			ans = min(ans, dp[a[i]]);
//		}
//		ans = min(ans, a[n] * x);
//		cout << ans << endl;
//	}
//
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	solve();
//
//	return 0;
//}