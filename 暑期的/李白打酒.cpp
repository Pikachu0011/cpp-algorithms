#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10, MOD = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n,m;
string s1, s2;
vector<int> path;
int ans;
void dfs(ll num, ll dian, ll hua) {
	if (num == 1 && dian == 0 && hua == 1) {
		ans = (ans + 1) % MOD;
	}
	if (dian) {
		dfs(num * 2, dian - 1, hua);
	}
	if (hua && num != 0) {
		dfs(num - 1, dian, hua - 1);
	}
}
void solve() {
	cin >> n >> m;
	dfs(2, n, m);
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}