//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//
//set<ll> se;
//void solve() {
//	ll n;
//	cin >> n;
//	ll cnt = 1;
//	ll yu = 1;
//	vector<int> ans;
//	while (yu%n != 0) {
//		yu = yu * 10 + 1;
//		cnt++;
//		yu = yu % n;
//		ans.push_back(yu / n);
//	}
//	int flag = 0;
//	for (int i = 0; i < ans.size(); i++) {
//		if (ans[i] != 0)flag = 1;
//		if (flag == 1)cout << ans[i];
//	}
//	cout << " " << cnt << endl;
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//
//
//
//	return 0;
//}