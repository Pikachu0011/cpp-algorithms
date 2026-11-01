//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	int n;
//	cin >> n;
//	string s = "";
//	stack<char>st;
//	for (int i = 1; i <= n; i++) {
//		char c;
//		cin >> c;
//		s += c;
//		st.push(c);
//	}
//	ll ans = 0;
//	for (int i = 0; i < n/2; i++) {
//		char m = s[i];
//		char n = st.top();
//		ans += min((n - m + 26) % 26, (m - n + 26) % 26);
//		st.pop();
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
//	int t;
//	cin >> t;
//	while (t--)solve();
//	return 0;
//}