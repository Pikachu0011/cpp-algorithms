#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
ll n;
bool isprime(ll num) {
	for (ll i = 2; i <= num / i; i++) {
		if (num % i == 0)return false;
	}
	return true;
}
ll dfs(string s, int pos, ll num) {
	if (pos == s.size()) {
		if (isprime(num)) {
			return num;
		}
		else return -1;
	}
	if (s[pos] == '*' && pos > 0) {
		for (int i = 0; i <= 9; i++) {
			ll temp = dfs(s, pos + 1, num * 10 + i);
			if (temp != -1) {
				return temp;
			}
			else continue;
		}
	}
	else if (s[pos] == '*' && pos == 0) {
		
		for (int i = 1; i <= 9; i++) {
			ll temp = dfs(s, pos + 1, num * 10 + i);
			if (temp != -1) {
				return temp;
			}
			else continue;
		}
	}
	else {
		return dfs(s, pos + 1, num * 10 + (s[pos] - '0'));
	}
	return -1;
}
void solve() {
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		cout << dfs(s, 0, 0) << endl;
	}
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