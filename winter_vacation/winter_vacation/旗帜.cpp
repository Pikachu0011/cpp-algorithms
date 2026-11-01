#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
char a[N][N];
set<ll> se;
void solve() {
	string s = "LANQIAO";
	int n, m;
	int ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int st = (i-1) % 7;
		
		for (int j = 1; j <= m; j++) {
			a[i][j] = s[st];
			//cout << st << " ";
			st = (st + 1) % 7;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			//cout << a[i][j];
			if (a[i][j] == 'A')ans++;
		}
	}
	cout << ans;

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