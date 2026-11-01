#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
void solve() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s);
		int x1 = s.find(',');
		int x2 = s.find('.');
		string s1 = s.substr(x1 - 3, 3);
		string s2 = s.substr(x2 - 3, 3);
		if (s1 == s1 && s1 == "ong") {
			int sum = 0;
			int idx;
			for (int i = x2; i >= x1; i--) {
				if (s[i] == ' ')sum++;
				if (sum == 3) {
					idx = i;
					break;
				}
			}
			int di = x2 - idx + 1;
			s.replace(idx, di, "qiao ben zhong");
			cout << s << endl;

		}
		else {
			cout << "Skipped\n";
		}
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