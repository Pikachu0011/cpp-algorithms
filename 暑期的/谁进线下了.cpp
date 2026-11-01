#include<bits/stdc++.h>
using namespace std;
const int N = 25;
int T;
void solve() {
	cin >> T;
	while (T--) {
		int n, s;
		int cnt1 = 0;
		int cnt2 = 0;
		bool flag1 = 0, flag2 = 0;

		cin >> n >> s;
		for (int i = 1; i <= n; i++) {
			int r, c;
			cin >> r >> c;
			if (r == 1)cnt1++;
			cnt2 += c;
		}
		if (cnt1 >= n / 2 + !(n % 2 == 0))flag1 = 1;
		if (cnt2 - s >= 50)flag2 = 1;
		cout << flag1 << " " << flag2 << endl;
	}

}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();

	return 0;
}