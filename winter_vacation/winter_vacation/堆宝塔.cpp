#include<bits/stdc++.h>
using namespace std;
void solve() {
	stack<int> A, B;
	int ans = 0;
	int maxx = 0;
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		if (A.empty() || x <= A.top()) {//<=
			A.push(x);
		}
		else {
			if (B.empty() || x >= B.top()) {
				B.push(x);
			}
			else {
				ans++;
				maxx = max(maxx, (int)A.size());
				while (!A.empty())A.pop();
				while (!B.empty() && B.top() > x) {
					A.push(B.top());
					B.pop();
				}
				A.push(x);
			}
		}
	}
	if (!A.empty()) {
		ans++;
		maxx = max(maxx, (int)A.size());
	}
	if (!B.empty()) {
		ans++;
		maxx = max(maxx, (int)B.size());
	}
	cout << ans << " " << maxx << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while (t--)solve();
	return 0;
}