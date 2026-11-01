#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
void solve() {
	string s;
	cin >> s;
	string t = "";
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1])t += s[i];
	}
	//cout << t << endl;
	if (t.size() > 2) {
		cout << "NO\n";
	}
	else cout << "YES\n";
}
int main() {
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
