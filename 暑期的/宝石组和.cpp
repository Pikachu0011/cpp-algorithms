//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int h[N];
//int cnt[N];
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> h[i];
//	}
//	sort(h + 1, h + n + 1);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= h[i] / j; j++) {
//			if (h[i] % j == 0) {
//				cnt[j]++;
//				if (h[i] / j != j)cnt[h[i] / j]++;
//			}
//		}
//	}
//	int x;
//	for (int i = N - 10; i >= 1; i--) {
//		if (cnt[i] >= 3) {
//			x = i;
//			break;
//		}
//	}
//	int c = 0;
//	for (int i = 1; i <= n; i++) {
//		if (h[i] % x == 0) {
//			cout << h[i] << " ";
//			c++;
//		}
//		if (c == 3)break;
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