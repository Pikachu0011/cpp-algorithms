#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n,k;
string s1, s2;
vector<int> mu;
bool check(int mid) {
	int cnt = 0;
	if (mid == 0)return true;
	for (int i = 0; i < mu.size(); i++) {
		cnt += (mu[i] / mid);
	}
	return cnt >= k;
}
void solve() {
	int maxx = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		maxx = max(maxx, x);
		mu.push_back(x);
	}
	int l = -1, r = maxx + 1;
	while (l + 1 != r) {
		int mid = (l + r) / 2;
		if (check(mid)) {
			l = mid;
		}
		else r = mid;
	}
	cout << l << endl;
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