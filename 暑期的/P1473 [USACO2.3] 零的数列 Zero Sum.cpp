#include<bits/stdc++.h>
using namespace std;
const int N = 10 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
char f[3] = { ' ', '+', '-' };
bool check() {
	int ans = 0, t;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0)continue;
		t = i;
		for (int j = i + 1; j <= n; j++) {
			if (a[j] != 0)break;
			t = t * 10 + j;
		}
		if (a[i] == 1)ans += t;
		else ans -= t;

	}
	if (ans == 0)return true;
	else return false;
}
void dfs(int k) {
	//for (int i = 1; i <= k; i++)cout << a[i] << " ";
	//cout << endl;
	if (k == n + 1) {
		if (check()) {
			cout << 1;
			for (int i = 2; i <= n; i++)cout << f[a[i]] << i;
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			a[k] = i;
			dfs(k + 1);
			//a[k] = 0;//可有可无
		}
	}
}
void solve() {
	cin >> n;
	a[1] = 1;
	dfs(2);


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