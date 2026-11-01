//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N], l[N], r[N];
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		if (i == 1)l[i] = a[i];
//		else l[i] = max(l[i - 1] + a[i], a[i]);
//	}
//	r[n] = a[n];
//	for (int i = n - 1; i >= 1; i--) {
//		r[i] = max(r[i + 1] + a[i], a[i]);
//	}
//	for (int i = 1; i <= n; i++) {
//		if (i != 1)cout << " ";
//		cout << l[i] + r[i] - a[i];
//	}
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