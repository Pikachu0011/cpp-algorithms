#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
void solve() {
	cin >> n;
	string s;
	//getchar();
	cin >> s;
	int cnt1 = 0, cnt2 = 0;
	//cout << s << endl;
	char st1 = 'A';
	char st2 = 'B';
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == st1) {
			cnt1++;
		}
		if (s[i] == st2) {
			cnt2++;
		}
		if (st1 == 'A') {
			st1 = 'B';
			st2 = 'A';
		}
		else {
			st1 = 'A';
			st2 = 'B';
		}
	}
	//cout << cnt1 << "    " << cnt2 << endl;
	cout << min((2*n - cnt1)/2, (2*n - cnt2) / 2) << endl;
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