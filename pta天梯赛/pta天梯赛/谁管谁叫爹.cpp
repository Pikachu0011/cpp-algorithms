#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
ll check(string s) {
	ll sum = 0;
	for (int i = 0; i < s.size(); i++) {
		sum += (s[i] - '0');
	}
	return sum;
}
void solve() {
	int n;
	cin >> n;
	while (n--) {
		ll na, nb;
		cin >> na >> nb;
		string sa = to_string(na), sb = to_string(nb);
		ll suma = check(sa), sumb = check(sb);
		if (na % sumb == 0 && nb % suma == 0) {
			if (na > nb)cout << 'A' << endl;
			else cout << 'B' << endl;
		}
		else if (na % sumb == 0) {
			cout << 'A' << endl;
		}
		else if (nb % suma == 0) {
			cout << 'B' << endl;
		}
		else {
			if (na > nb)cout << 'A' << endl;
			else cout << 'B' << endl;
		}
	}
}
int main() {
	solve();
	return 0;
}
