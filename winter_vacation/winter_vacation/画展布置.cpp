//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//ll a[N], b[N];
//ll sum[N];
//int n, m;
//void solve() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	sort(a + 1, a + n + 1);
//	for (int i = 1; i < n; i++) {
//		b[i] = a[i + 1] * a[i + 1] - a[i] * a[i];
//		sum[i] = sum[i - 1] + b[i];
//	}
//	for (int i = 1; i < n; i++) {
//		b[i] = a[i + 1] * a[i + 1] - a[i] * a[i];
//		sum[i] = sum[i - 1] + b[i];
//		//cout << i << " " << sum[i] << endl;
//	}
//
//	ll ans = 1e10;
//	for (int i = 2; i + m - 2 <= n - 1; i++) {
//		//cout << i + m - 2 << " " << i - 1 << endl;
//		//cout << sum[i + m - 2] << " " << sum[i - 1] << endl;
//		ans = min(ans, sum[i + m - 2] - sum[i - 1]);
//	}
//	cout << ans << endl;
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