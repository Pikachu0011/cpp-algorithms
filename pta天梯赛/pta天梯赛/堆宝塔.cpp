#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	int n;
	cin >> n;
	stack<int> sta, stb;
	int ans = 0;
	int maxx = 0;
	while (n--) {
		int x;
		cin >> x;
		if (sta.empty() || x < sta.top()) {
			sta.push(x);
		}
		else {
			if (stb.empty() || x > stb.top()) {
				stb.push(x);
			}
			else {
				ans++;
				maxx = max(maxx, (int)sta.size());
				while (!sta.empty())sta.pop();
				while (!stb.empty() && stb.top() > x) {
					sta.push(stb.top());
					stb.pop();
				}
				sta.push(x);
			}
		}
	}
	maxx = max(maxx, (int)sta.size());
	maxx = max(maxx, (int)stb.size());
	ans = ans + (!sta.empty()) + (!stb.empty());
	cout << ans << " " << maxx << endl;
}
int main() {
	solve();



	return 0;
}
