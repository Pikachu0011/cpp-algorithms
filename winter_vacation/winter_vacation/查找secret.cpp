#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
void solve() {
	string s;
	getline(cin, s);
	//cout << s << endl;
	stringstream ss1(s);
	string temp;
	int pos = 1;
	bool flag = 0;
	while (ss1 >> temp) {
		//cout << temp << endl;
		if (temp == "secret") {
			flag = 1;
			cout << "\"secret\" is pos " << pos << endl;
		}
		pos++;
	}
	if (!flag) {
		cout << "No \"secret\"";
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