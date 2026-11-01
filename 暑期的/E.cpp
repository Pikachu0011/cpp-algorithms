#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	bool flag = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++) {
		if (a[i] % a[i - 1] != 0) {
			cnt++;
			//cout << i << " " << i - 1 << endl;
			int ti = a[i], tl = a[i - 1], tr = a[i + 1];
			int tll = a[i - 2];
			if (tll != 0 && ti % tll == 0) {
				if (tr % ti == 0) {
					a[i - 1] = a[i];
				}
				else if (tr % tl == 0) {
					a[i] = a[i - 1];
				}
				else flag = 0;
			}
			else if (tll != 0 && ti % tll != 0)a[i] = a[i - 1];
			else if (tll == 0) {
				if (tr % tl == 0)a[i] = a[i - 1];
				else if (tr % ti == 0) a[i - 1] = a[i];
				else flag = 0;
			}
		}
		if (cnt > 1)flag = 0;
	}
	if (flag)cout << "YES\n";
	else cout << "NO\n";

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