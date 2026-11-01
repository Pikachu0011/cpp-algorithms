#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
	int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << 2 * ((n + 1) / 2 + n);
	}
	else cout << 2 * ((n + 1) / 2 + n + 1);
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie();
	solve();

	return 0;
}