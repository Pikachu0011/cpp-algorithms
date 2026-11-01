//173
#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n, m;
vector<int> arr[N];
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		for (int j = 1; j <= k; j++) {
			int x;
			cin >> x;
			arr[x].push_back(i);
		}
	}
	
	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		map<int, int>mp;
		for (int i = 0; i < arr[a].size(); i++) {
			mp[arr[a][i]] = 1;
		}
		ll ans = 0;
		for (int i = 0; i < arr[b].size(); i++) {
			if (mp[arr[b][i]]) {
				//cout << "ÈË" << arr[b][i] << endl;
				ans++;
			}
		}
		cout << ans << endl;
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