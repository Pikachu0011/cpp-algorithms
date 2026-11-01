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
	while (n--) {
		int x;
		cin >> x;
		//cout << "------Êä³ö  £º";
		if (x % 7 == 0) {
			int cnt = x / 7;
			while (cnt--) {
				cout << 8;
			}
			cout << endl;
		}
		else if (x % 7 == 1) {
			if (x == 1)cout << -1 << endl;
			else {
				cout << 10;
				int cnt = x / 7;
				cnt--;
				while (cnt--)cout << 8;
				cout << endl;
			}
		}
		else if (x % 7 == 2) {
			cout << 1;
			int cnt = x / 7;
			while (cnt--) {
				cout << 8;
			}
			cout << endl;
		}
		else if (x % 7 == 3) {
			if (x == 3)cout << 7 << endl;
			else if (x == 10)cout << 22 << endl;
			else {
				cout << 200;
				int cnt = x / 7;
				cnt -= 2;
				while (cnt--) {
					cout << 8;
				}
				cout << endl;
			}
		}

		else if (x % 7 == 4) {
			if (x == 4)cout << 4 << endl;
			else {
				cout << 20;
				int cnt = x / 7;
				cnt--;
				while (cnt--) {
					cout << 8;
				}
				cout << endl;
			}
		}
		else if (x % 7 == 5) {
			cout << 2;
			int cnt = x / 7;
			while (cnt--) {
				cout << 8;
			}
			cout << endl;
		}
		else if (x % 7 == 6) {
			cout << 6;
			int cnt = x / 7;
			while (cnt--) {
				cout << 8;
			}
			cout << endl;
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