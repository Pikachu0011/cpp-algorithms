#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10, M = 110;
typedef long long ll;
typedef pair<int, int> pii;
vector<int> arr(N);
set<ll> se;
int dp[N][M];//从i-n中选，能凑出j的方案数。
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin() + 1, arr.begin() + 1 + n);
	for (int i = 0; i <= n + 1; i++)dp[i][0] = 1;
	for (int i = n; i >= 1; i--) {
		for (int j = m; j >= 0; j--) {
			dp[i][j] = dp[i + 1][j];
			if (j >= arr[i])dp[i][j] += dp[i + 1][j - arr[i]];
		}
	}
	if (dp[1][m]) {
		int i = 1, j = m;
		while (i <= n) {
			if (j >= arr[i] && dp[i + 1][j - arr[i]]) {
				cout << arr[i];
				j -= arr[i];
				if (j != 0)cout << " ";
			}
			i++;
		}
	}
	else cout << "No Solution\n";
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