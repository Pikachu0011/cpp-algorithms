#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	ll n, x1, x2, k;
	cin >> n >> x1 >> x2 >> k;
	cout << k + min((x2 - x1 + n) % n, n - ((x2 - x1 + n) % n)) << endl;
	
}
int main() {
	int t;
	cin >> t;
	//t = 1;
	while(t--)solve();
	return 0;
}
