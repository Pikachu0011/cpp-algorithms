//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//map<int, int> mp;
//set<ll> se;
//int arr[20];
//ll n, a, b;
//void dfs(ll x, ll len) {
//	if (x % len != 0)return;
//	if (len == n) {
//		if (x >= a && x <= b) {
//			se.insert(x);
//		}
//		return;
//	}
//	for (int i = 0; i <= 9; i++) {
//		dfs(x * 10 + i, len + 1);
//	}
//}
//void solve() {
//
//	cin >> n >> a >> b;
//	for (int i = 1; i <= 9; i++) {
//		dfs(i, 1);
//	}
//	if (!se.empty()) {
//		for (auto x : se) {
//			cout << x << endl;
//		}
//	}
//	else cout << "No Solution\n";
//}
//int main() {
//	int t;
//	solve();
//
//
//
//	return 0;
//}