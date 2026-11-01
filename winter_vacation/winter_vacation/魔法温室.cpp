//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N = 1e5 + 10;
//ll h[N];
//ll diff[N];
//ll n, m, w;
//ll T;
//bool check(ll mid) {
//	memset(diff, 0, sizeof(diff));
//	ll cur = 0, cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		cur += diff[i];
//		ll now = h[i] + cur;
//		if (now < mid) {
//			ll need = mid - now;
//			cnt += need;
//			if (cnt > m)return false;
//			diff[i] += need;
//			cur += need;
//			if (i + w <= n) {
//				diff[i + w - 1 + 1] -= need;
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	cin >> T;
//	while (T--) {
//		cin >> n >> m >> w;
//		ll L = 1e18, R = 0;
//		for (int i = 1; i <= n; i++) {
//			cin >> h[i];
//			L = min(L, h[i]);
//			R = max(R, h[i]);
//		}
//		R += m;
//		ll ans = L;
//		while (L <= R) {
//			ll mid = (L + R) / 2;
//			if (check(mid)) {
//				ans = mid;
//				L = mid + 1;
//			}
//			else R = mid - 1;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}