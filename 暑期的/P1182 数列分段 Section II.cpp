//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int a[N], s[N];
//set<ll> se;
//int n, m;
//string s1, s2;
//bool check(int mid) {
//	int cnt = 1;
//	int nl = 1;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] > mid)return false;
//		if (s[i] - s[nl - 1] > mid) {
//			nl = i;
//			cnt++;
//		}
//		if (cnt > m)return false;
//	}
//	return true;
//}
//void solve() {
//	cin >> n >> m;
//	int l = -1e9, r = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		l = max(l, a[i]);
//		r += a[i];
//		s[i] = a[i] + s[i - 1];
//	}
//	//s[l ... r] = s[r] - s[l - 1];
//	l -= 1;
//	while (l + 1 != r) {
//		int mid = (l + r) >> 1;
//		if (check(mid)) {
//			//cout << mid << endl;
//			r = mid;
//		}
//		else l = mid;
//	}
//	cout << r << endl;
//
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}