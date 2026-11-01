//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//
//void solve() {
//	string s;
//	cin >> s;
//	int maxn = 0;
//	a[0] = 1;
//	for (int i = 1; i < s.size(); i++) {
//		if (s[i] == s[i - 1])a[i] = 1;
//		else a[i] = a[i - 1] + 1;
//		maxn = max(maxn, a[i]);
//	}
//	cout << maxn << endl;
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}