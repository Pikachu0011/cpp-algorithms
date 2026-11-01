#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	int n, m;
	cin >> n >> m;
	int sum = 0;
	for (int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	cout << max(0, sum - n * (m - 1));
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
