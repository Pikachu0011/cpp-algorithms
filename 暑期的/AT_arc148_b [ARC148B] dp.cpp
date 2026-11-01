#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
char a[N];
set<ll> se;
int n;
string s1, s2;
void solve() {
	cin >> n;
	string s;
	cin >> s;
	int l = -1;//
	int idxr = -1;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'p') {
			l = i;
			break;
		}
	}
	if (l == -1) {
		cout << s << endl;
		return;
	}
	int maxx = 0;
	for (int i = l; i < n; i++) {

		if (s[i] == 'p') {
			cnt = 1;
			int j;
			for (j = i + 1; j < n; j++) {
				if (s[j] != 'p') {
					break;
				}
				else cnt++;
			}
			if (cnt > maxx) {
				maxx = cnt;
				idxr = j - 1;
			}
			i = j;
		}
		
	}
	//cout << l << " " << idxr << endl;
	for (int i = 0; i < l; i++) {
		cout << s[i];
	}
	//cout << endl;
	string t = s.substr(l, idxr - l + 1);
	int len = t.size();
	for (int i = 0; i < len; i++) {
		int j = len - i - 1;
		if (t[j] == 'p')cout << 'd';
		else cout << 'p';
	}
	//cout << endl;
	for (int i = idxr + 1; i < n; i++)cout << s[i];
	cout << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}