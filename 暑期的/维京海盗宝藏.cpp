#include<bits/stdc++.h>
using namespace std;
#define int long long 

const int N = 300010;
int n, k, c;
int q[N];
bool cmp(int a, int b) {
	return a >= b;
}
void solve() {
	cin >> n >> k >> c;
	for (int i = 1; i <= n; i++) {
		cin >> q[i];
		q[i] = q[i] - c * i;		
	}
	sort(q + 1, q + 1 + n, cmp);
	int res = 0;
	for (int i = 1; i <= k; i++) {
		res += q[i];
	}
	res += c * k * (k + 1) / 2;
	cout << res << "\n";
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie();
	solve();
	return 0;
}