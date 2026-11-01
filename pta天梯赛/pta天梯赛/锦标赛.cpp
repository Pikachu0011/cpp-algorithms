#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
vector<int> a[N];
vector<int> ans;
void solve() {
	int k;
	cin >> k;
	int cnt = pow(2, k - 1);
	int tk = k;
	while (tk--) {
		for (int i = 1; i <= cnt; i++) {
			int x;
			cin >> x;
			a[k - tk + 1].push_back(x);
		}
	}

}
int main() {
	solve();



	return 0;
}
