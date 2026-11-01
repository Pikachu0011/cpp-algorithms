#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 100010;
typedef pair<int, int> PII;
int T;
PII a[N];
void solve() {
	cin >> T;
	while (T--) {
		int n, H;
		cin >> n >> H;
		for (int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			a[i] = { x * (H - x),i };
		}
		sort(a + 1, a + 1 + n);
		for (int i = 1; i <= n; i++) {
			cout << a[i].second << " ";
		}
		cout << endl;
	}

}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();

	return 0;
}