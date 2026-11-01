#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef pair<int, int> pii;
vector<pii> e[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int l, r;
		cin >> l >> r;
		e[l].push_back({ r,i });
	}
	vector<int> ans;
	priority_queue<pii, vector<pii>, greater<pii>> q;

	for (int k = 0; k < n; k++) {
		for (auto x : e[k])q.push(x);
		while (!q.empty() && q.top().first < k)q.pop();
		if (q.empty())break;//tui 
		ans.push_back(q.top().second);
		q.pop();
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++) {
		if (i != 0)cout << " ";
		cout << ans[i];
	}
}
int main() {
	solve();

	return 0;
}