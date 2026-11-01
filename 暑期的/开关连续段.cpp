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
//	char pre;
//	cin >> pre;
//	if (n == 1) {
//		cout << 0 << endl;
//		return;
//	}
//	int cnt = 0;
//	int flag1 = 0, flag2 = 0;
//	for (int i = 2; i <= n; i++) {
//		char x;
//		cin >> x;
//		if (x != pre) {
//			cnt++;
//		}
//		if (i == 2 && x == pre) {
//			flag1 = 1;
//		}
//		if (i == n && x == pre) {
//			flag2 = 1;
//		}
//		pre = x;
//	}
//	cout << cnt << endl;
//	if (cnt == n - 1)cout << cnt << endl;
//	else if (cnt == n - 2 && (flag1 || flag2)) {
//		cout << cnt + 1;
//	}
//	else {
//		if (cnt + 2 <= n - 1)cout << cnt + 2 << endl;
//		else cout << n - 1 << endl;
//	}
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