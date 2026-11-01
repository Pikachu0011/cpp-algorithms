//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//#define int long long
//typedef pair<int, int> pii;
//set<int> se;
//int arr[N];
//
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a]++;
//		arr[b + 1]--;
//	}
//	int ans = 0;
//	for (int i = 0; i <= 1e6; i++) {
//		arr[i] = arr[i - 1] + arr[i];
//		ans = max(ans, arr[i]);
//	}
//	cout << ans << endl;
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	//cin >> t;
//	t = 1;
//	while (t--)solve();
//	return 0;
//}
