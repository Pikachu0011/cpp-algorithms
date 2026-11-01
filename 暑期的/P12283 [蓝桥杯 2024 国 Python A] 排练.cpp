//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//#define int long long 
//int a[N];
//set<ll> se;
//int n;
//string s1, s2;
//bool check(int x) {
//	int cnt = 0;
//	int pre = a[1], id = a[2];
//	for (int i = 3; i <= n; i++) {
//		int ed = a[i];
//		if (ed - id <= 2 * (id - pre)) {
//			pre = id;
//			id = ed;
//		}
//		else {
//			bool flag = 0;
//			while (!flag) {
//				cnt++;
//				if (cnt > x)return false;
//				int xx;
//				xx = 3 * id - 2 * pre;
//				pre = id;
//				id = xx;
//				if (ed - id <= 2 * (id - pre)) {
//					flag = 1;
//				}
//			}
//			pre = id, id = ed;
//		}
//	}
//	return true;
//}
//void solve() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	if (n < 3) {
//		cout << 0 << endl;
//		return;
//	}
//	int l = -1, r = 1e8;//l 不可以 r 可以
//	while (l + 1 != r) {
//		//cout << l << " " << r << endl;
//		int mid = (l + r) / 2;
//		
//		if (check(mid))r = mid;
//		else l = mid;
//	}
//	cout << r << endl;
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}