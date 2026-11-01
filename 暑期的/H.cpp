//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	cin >> n;
//	int a[N];
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	bool vt[N] = {0};
//	ll ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (vt[a[i] + 1]) {
//			ans++;
//		}
//		vt[a[i]] = 1;
//	}
//	cout << ans << endl;
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--)solve();
//	return 0;
//}