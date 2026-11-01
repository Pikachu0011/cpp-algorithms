#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
void solve() {
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	for (int i = 1; i <= k; i++) {
		int ta = a, tb = b, tc = c;
		a = (tb + tc) / 2;
		b = (ta + tc) / 2;
		c = (ta + tb) / 2;
		if (a == b && b == c)break;
	}
	cout << a << " " << b << " " << c << endl;

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)solve();



	return 0;
}