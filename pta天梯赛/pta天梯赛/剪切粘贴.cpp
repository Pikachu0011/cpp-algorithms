#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	string s;
	cin >> s;
	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		string moban = s.substr(a, b - a + 1);
		s.erase(a, b - a + 1);
		string sa, sb;
		cin >> sa >> sb;
		string all = sa + sb;
		auto t = s.find(all);
		if (t != string::npos) {
			s.insert(t + sa.size(), moban);
		}
		else {
			s = s + moban;
		}
		cout << s << endl;
	}
	cout << s << endl;
}
int main() {
	solve();



	return 0;
}
