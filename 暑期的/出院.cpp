#include<bits/stdc++.h>
using namespace std;
#define int long long 
map<string, string> mp;
void solve() {
	int n, m;
	cin >> n >> m;
	while (n--) {
		string a, b;
		cin >> a >> b;
		mp[a] = b;
	}
	
	while (m--) {
		string x;
		cin >> x;
		string res;
		if (mp.count(x))cout << mp[x] << endl;
		else {
			int cnt = 0;
			for (int i = 1; i < x.size(); i++) {
				auto a = x.substr(0, i), b = x.substr(i);
				if (mp.count(a) && mp.count(b)) {
					res = mp[a] + mp[b];
					cnt++;
				}
			}
			if (cnt != 1)cout << "D" << endl;
			else cout << res << endl;
		}
	}
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();

	return 0;
}