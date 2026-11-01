//#include<bits/stdc++.h>
//using namespace std;
//const int N = 500 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//ll o[N], ov[N], ovo[N];
//set<ll> se;
//ll cal(string s) {
//	if (s[0] == 'o')o[0] = 1;
//	for (int i = 1; i < s.size(); i++) {
//		if (s[i] == 'o') {
//			o[i] = o[i - 1] + 1;
//			ov[i] = ov[i - 1];
//			ovo[i] = ovo[i - 1] + ov[i - 1];
//		}
//		else if (s[i] == 'v') {
//			o[i] = o[i - 1];
//			ov[i] = o[i - 1] + ov[i - 1];
//			ovo[i] = ovo[i - 1];
//		}
//	}
//	return ovo[s.size() - 1];
//}
//void solve() {
//	string s;
//	cin >> s;
//	int pos[N], cnt = 1;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '?') {
//			pos[cnt] = i;
//			cnt++;
//			s[i] = 'o';
//		}
//	}
//	cnt--;
//	ll ans = 0;
//	for (int i = 1; i <= cnt; i++) {
//		for (int j = i; j <= cnt; j++) {
//			s[pos[j]] = 'v';
//			ans = max(ans, cal(s));
//		}
//		for (int j = i; j <= cnt; j++) {
//			s[pos[j]] = 'o';
//		}
//	}
//	cout << ans << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--)solve();
//	return 0;
//}