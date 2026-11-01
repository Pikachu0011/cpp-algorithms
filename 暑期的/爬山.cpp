#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
void solve() {
	int p, q;
	priority_queue<int> pq;
	cin >> n >> p >> q;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	while (p || q) {
		int x = pq.top();
		pq.pop();
		if (p && (sqrt(x) < x / 2)) {
			p--;
			pq.push((int)sqrt(x));
		}
		else if (q && (x / 2 <= sqrt(x))) {
			q--;
			pq.push(x / 2);
		}
	}
	int ans = 0;
	for (int i : pq) {

	}

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