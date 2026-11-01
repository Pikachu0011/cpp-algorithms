#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
int n, m, k;
queue<int> q;//À…÷¶
queue<int> tui;//Õ∆ÀÕ
stack<int> he;
void solve() {
	cin >> n >> m >> k;
	while (n--) {
		int x;
		cin >> x;
		tui.push(x);
	}
	while (!tui.empty()) {
		if (q.empty()) {
			if (!he.empty()) {
				q.push(he.top());
				he.pop();
			}
			else {
				q.push(tui.front());
				tui.pop();
			}
		}
		else {
			if (q.size() == k) {
				bool flag = 0;
				while (!q.empty()) {
					if (flag)cout << " ";
					else flag = 1;
					cout << q.front();
					q.pop();
				}
				cout << endl;
				continue;
			}
			if (he.size() == m && tui.front() > q.back()) {
				bool flag = 0;
				while (!q.empty()) {
					if (flag)cout << " ";
					else flag = 1;
					cout << q.front();
					q.pop();
				}
				cout << endl;
				continue;
			}
			if (q.empty()) continue;
			if (!he.empty() && he.top() <= q.back() && q.size() < k) {
				q.push(he.top());
				he.pop();
			}
			else {
				if (tui.front() <= q.back() && q.size() < k) {
					q.push(tui.front());
					tui.pop();
				}
				else if (tui.front() > q.back() && he.size() < m) {
					he.push(tui.front());
					tui.pop();
				}
			}
		}
		//cout<<q.front()<< "  " << he.size() << endl;
	}
	//cout<<endl;
	while (!he.empty()) {
		if (!q.empty() && he.top() > q.back()) {
			bool flag = 0;
			while (!q.empty()) {
				if (flag)cout << " ";
				else flag = 1;
				cout << q.front();
				q.pop();
			}
			cout << endl;
		}
		if (q.size() == k) {
			bool flag = 0;
			while (!q.empty()) {
				if (flag)cout << " ";
				else flag = 1;
				cout << q.front();
				q.pop();
			}
			cout << endl;
		}
		else {
			if (q.size() < k) {
				q.push(he.top());
				he.pop();
			}
		}
	}
	if (!q.empty()) {
		bool flag = 0;
		while (!q.empty()) {
			if (flag)cout << " ";
			else flag = 1;
			cout << q.front();
			q.pop();
		}
		cout << endl;
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