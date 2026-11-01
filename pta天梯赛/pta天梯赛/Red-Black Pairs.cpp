//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist[N];
//int vt[N];
//int a1[N];
//int a2[N];
//int n, m;
//void solve() {
//	string s1, s2;
//	cin >> n;
//	cin >> s1 >> s2;
//	for (int i = 0; i < s1.size(); i++) {
//		if (s1[i] == 'R')a1[i + 1] = 0;
//		else a1[i + 1] = 1;
//		if (s2[i] == 'R')a2[i + 1] = 0;
//		else a2[i + 1] = 1;
//	}
//	int ans = 0;
//	for (int i = 1; i <= n + 2;) {
//		int g = a1[i];
//		int g1 = a1[i + 1];
//		int g2 = a2[i];
//		int g3 = a2[i + 1];
//		if (g == g2) {
//			i++;
//		}
//		else if (g == g1 || g2 == g3) {
//			if ((g == g1 && g2 != g3) || (g != g1 && g2 == g3)) {
//				ans += 1;
//			}
//			i += 2;
//		}
//		else {
//			if (g != g2) {
//				ans++;
//			}
//			i++;
//		}
//
//	}
//	cout << ans << endl;
//
//
//}
//int main() {
//	int t;
//	cin >> t;
//	while(t--)solve();
//
//
//
//	return 0;
//}
