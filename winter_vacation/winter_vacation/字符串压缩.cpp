#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
void solve() {
	string s;
	getline(cin, s);
	string ans = "";
	map<char, int> mp;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			ans += s[i];
			continue;
		}
		mp[s[i]]++;
		if (mp[s[i]] == 1 || mp[s[i]] == 3 || mp[s[i]] == 6) {
			ans += s[i];
		}
	}
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}