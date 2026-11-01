//114
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
vector<int> a[N];
bool vis[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		while (k--) {
			int x;
			cin >> x;
			a[i].push_back(x);
			vis[x] = 1;
		}
	}
	int s;
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			s = i;
			break;
		}
	}
	queue<int> q;
	q.push(s);
	vis[s] = 1;
	int deep = 0;
	int ans;
	while (!q.empty()) {
		int num = q.size();
		//deep++;
		//cout << deep << endl;
		for (int i = 1; i <= num; i++) {
			int t = q.front();
			ans = t;
			q.pop();
			for (int j = 0; j < a[t].size(); j++) {
				q.push(a[t][j]);
			}
		}
	}
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