//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//map<ll, ll>mp;
//ll a[N];
//set<ll> se;
//ll n,c;
//string s1, s2;
//void solve() {
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		mp[a[i]]++;
//	}
//	ll ans = 0;
//	for (int i = 1; i <= n; i++) {
//		mp[a[i]]--;
//		ans += mp[a[i] - c];
//		ans += mp[a[i] + c];
//	}
//	cout << ans << endl;
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}