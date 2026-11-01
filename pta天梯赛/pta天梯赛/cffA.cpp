#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
#define int long long
#define x first
#define y second
typedef pair<int, int> pii;
set<int> se;
int arr[N];
void solve() {
	int ans = 0;
	int n;
	cin >> n;
	while (n--) {
		string a, b;
		cin >> a >> b;
		if (a.size() >= 4) {
			string t = ".log";
			bool flag = 1;
			for (int i = a.size() - 1, j = 3; j >= 0; j--, i--) {
				if (a[i] != t[j])flag = 0;
			}
			if (b[2] != 'x')flag = 0;
			if (flag)ans++;
		}
	}
	cout << ans << endl;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	//cin >> t;
	t = 1;
	while (t--)solve();
	return 0;
}
