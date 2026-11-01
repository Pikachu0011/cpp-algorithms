#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
deque<char> dq;
set<ll> se;
void solve() {
	dq.clear();
	string s;
	int n;
	cin >> n;
	cin >> s;
	bool flag = 1;//1ÔÚÓÒ±ß£¬0 ÔÚ×ó±ß
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '!') {
			flag = !flag;
		}
		else if (s[i] == '-') {
			if (flag && !dq.empty())dq.pop_back();
			else if (!flag && !dq.empty())dq.pop_front();
		}
		else {
			if (flag)dq.push_back(s[i]);
			else dq.push_front(s[i]);
		}
	}
	for (char i : dq)cout << i;
	if (dq.empty())cout << "Empty";
	cout << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}