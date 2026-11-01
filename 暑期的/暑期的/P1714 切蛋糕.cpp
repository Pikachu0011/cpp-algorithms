//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n, m;
//string s1, s2;
//void solve() {
//	cin >> n >> m;
//	vector<ll> p(n + 1), s(n + 1, 0);
//	for (int i = 1; i <= n; i++) {
//		cin >> p[i];
//		s[i] = s[i - 1] + p[i];
//	}
//	deque<ll> dq;
//	dq.push_back(0);
//	ll ans = -1e18;
//	for (int r = 1; r <= n; r++) {
//		while (!dq.empty() && dq.front() < r - m)dq.pop_front();
//		ans = max(ans, s[r] - s[dq.front()]);
//		while (!dq.empty() && s[r] <= s[dq.back()])dq.pop_back();
//		dq.push_back(r);
//	}
//	cout << ans << endl;
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