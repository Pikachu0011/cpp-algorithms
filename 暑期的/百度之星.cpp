//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//const int N = 200010;
//typedef pair<int, int> PII;
//int a[N];
//
//void solve() {
//	int t;
//	cin >> t;
//	map<int, int> mp;
//	while (t--) {
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
//
//			//cout << i.first << " " << i.second << endl;
//		}
//		if (y <= x) {
//			cout << (n - max_num) * y << endl;
//		}
//		else {
//			int ans = 999999;
//			for (int i = 0; i < maxx.size(); i++) {
//				int res = 0;
//				int num = maxx[i];//数字
//				if (num > 0) {
//					for (auto i : mp) {
//						if (i.first == num)continue;
//						else if (i.first < num)res += y * i.second;
//						else res += min((i.first - num) * x, y) * i.second;
//					}
//				}
//				else if (num == 0) {
//					for (auto i : mp) {
//						if (i.first == num)continue;
//						else if (i.first <= 1)res += x * i.second;
//						else res += min((i.first - num) * x, y) * i.second;
//					}
//				}
//				else res += (n - max_num) * y;
//				ans = min(ans, res);
//			}
//			cout << ans << endl;
//		}
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