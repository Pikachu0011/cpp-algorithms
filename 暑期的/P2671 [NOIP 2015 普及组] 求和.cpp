//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10, MOD = 10007, MAXN = 100005;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n, m;
//string s1, s2;
//struct Group {
//	vector<int> f;
//	vector<int> num;
//};
//Group groups[MAXN][2];//第一维颜色，第二维奇偶
//
//void solve() {
//	cin >> n >> m;
//	vector<int> number(n + 1), color(n + 1);
//	for (int i = 1; i <= n; i++)cin >> number[i];
//	for (int i = 1; i <= n; i++)cin >> color[i];
//	//分组
//	for (int i = 1; i <= n; i++) {
//		int c = color[i];
//		int p = i & 1;
//		groups[c][p].f.push_back(i);
//		groups[c][p].num.push_back(number[i]);
//	}
//	int ans = 0;
//	//遍历颜色奇偶性统计
//	for (int c = 1; c <= m; c++) {
//		for (int p = 0; p < 2; p++) {
//			Group g = groups[c][p];
//			int cnt = g.f.size();
//			if (cnt == 0)continue;
//			int sumf = 0, sumnum = 0, sumfn = 0;
//			for (int i = 0; i < cnt; i++) {
//				sumf = (sumf + g.f[i]) % MOD;
//				sumnum = (sumnum + g.num[i]) % MOD;
//				sumfn = (sumfn + g.f[i] * g.num[i]) % MOD;
//			}
//			int contrib = ((cnt - 2) * sumfn + sumf * sumnum) % MOD;
//			if (contrib < 0)contrib += MOD;
//			ans = (ans + contrib) % MOD;
//		}
//	}
//	cout << ans << endl;
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