#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
set<ll> se;
int n, m;
string s1, s2;
int a, b, c;
map<int, bool> mp;
int gcd(int a, int b) {
	if (b == 0)return a;
	else return gcd(b, a % b);
}
void init() {
	//int res = 1;
	for (int i = 0; i <= 1000; i++) {
		mp[i * i] = 1;
	}
}
bool is_2(int x) {
	if (mp[x])return true;
	else return false;
}
string sqrts(int x) {
	string ans;
	int res = x;
	int wai = 1;
	for (int i = 2; i <= sqrt(x); i++) {
		if ( res % (i * i) == 0) {
			res /= (i * i);
			wai *= i;
		}
	}
	//cout << wai << " " << res << endl;
	int mu = 2 * a;
	int gc = gcd(wai, 2 * a);
	wai /= gc, mu /= gc;
	if (wai != 1)ans = to_string(wai) + "*";
	ans = ans + "sqrt(" + to_string(res) + ")";
	if (mu != 1) {
		ans = ans + "/" + to_string(mu);
	}
	return ans;
}
void solve() {
	cin >> a >> b >> c;
	//cout << sqrts(45) << endl;
	////sqrts(9);
	//cout << sqrts(24) << endl;
	int dd = b * b - 4 * a * c;
	if (dd < 0) {
		cout << "NO\n";
		return;
	}

	if (is_2(dd)) {
		dd = sqrt(dd);
		int zi = b * -1 + dd;
		int mu = 2 * a;
		int gc = gcd(zi, mu);
		if (zi == 0) {
			cout << 0 << endl;
			return;
		}
		zi /= gc, mu /= gc;
		cout << zi << '/' << mu << endl;
		return;
	}
	int zi = -1 * b;
	int mu = 2 * a;
	int gc = gcd(zi, mu);
	zi /= gc;
	mu /= gc;
	if (mu < 0) {
		zi = -1 * zi;
		mu = -1 * mu;
	}
	if (zi == 0) {
		cout << 0;
	}
	else {
		cout << zi;
		if (mu != 1)cout << "/" << mu;
		cout << "+";
	}
	cout << sqrts(dd) << endl;


}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t >> m;
	init();
	
	while (t--)solve();
	return 0;
}