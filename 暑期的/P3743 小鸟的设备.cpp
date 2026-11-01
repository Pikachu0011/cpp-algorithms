#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
double a[N], b[N];
set<ll> se;
double n, p;
string s1, s2;
bool check(double mid) {
	double q = mid * p;
	double need = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] * mid <= b[i])continue;
		need += (a[i] * mid - b[i]);
	}
	return need <= q;
}
void solve() {
	cin >> n >> p;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		sum += b[i];
	}
	if (sum <= p) {
		cout << -1 << endl;
		return;
	}
	double l = 0, r = 1e10;
	while (r - l > 1e-6) {
		double mid = (l + r) / 2;
		if (check(mid))l = mid;
		else r = mid;
	}
	//printf("%.10lf\n", l);
	cout << l << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}