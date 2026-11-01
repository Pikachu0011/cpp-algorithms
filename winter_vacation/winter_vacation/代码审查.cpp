#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se2;
set<ll> se3;

void solve() {
	//cout<<'G' - 'A' + 'a';
	string s;

	getline(cin, s);
	//cout<<s<<endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'B' && (i + 2 < s.size()) && (s[i + 1] == 'U' || s[i + 1] == 'u') && (s[i + 2] == 'G' || s[i + 2] == 'g')) {
			s[i] = s[i] - 'A' + 'a';
		}
		if (s[i] == 'U' && (i - 1 >= 0 && i + 1 < s.size()) && (s[i - 1] == 'B' || s[i - 1] == 'b') && (s[i + 1] == 'G' || s[i + 1] == 'g')) {
			s[i] = s[i] - 'A' + 'a';
		}
		if (s[i] == 'G' && (i - 2 >= 0) && (s[i - 1] == 'U' || s[i - 1] == 'u') && (s[i - 2] == 'B' || s[i - 2] == 'b')) {
			s[i] = s[i] - 'A' + 'a';
		}
	}
	int flag = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'b') {
			if (i + 2 < s.size()) {
				if (s[i + 1] == 'u' && s[i + 2] == 'g') {
					flag = flag + 1;
				}
			}

		}
	}
	if (flag > 3)cout << "Review Needed\n";
	else 	cout << s << endl;
}
int main() {
	int t;
	cin >> t;
	getchar();
	while (t--)solve();



	return 0;
}