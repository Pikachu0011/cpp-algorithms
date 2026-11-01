#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int a[N], b[N];
void solve() {
	string s;
	cin >> s;
	//cin >> s;
	int n = s.size();
	int cnt = 0;
	map<char, bool> mp;
	mp['i'] = 1;
	for (int i = 0; i < n; i++) {
		if (!mp[s[i]]) {
			cnt++;
			mp[s[i]] = 1;
		}
	}
	cout << cnt << endl;
}
int main() {
	int t;
	//cin >> t;
	t = 1;
	while(t--)solve();
	return 0;
}
