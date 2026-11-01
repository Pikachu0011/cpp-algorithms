#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n;
void solve() {
	cin >> n;
	while (n--) {
		int m, d, c;
		cin >> m >> d >> c;
		if (m > 7) {
			cout << "Too late!" << endl;
		}
		else if (m == 7) {
			if (d > 11) {
				cout << "Too late!" << endl;
			}
			else {
				if (c > 2000) {
					cout << "^_^" << endl;
				}
				else if (c == 2000) {
					cout << "Ok!" << endl;
				}
				else {
					cout << "Need more!" << endl;
				}
			}
		}
		else if(m == 6){
			if (d <= 20) {
				if (c > 1800) {
					cout << "^_^" << endl;
				}
				else if (c == 1800) {
					cout << "Ok!" << endl;
				}
				else {
					cout << "Need more!" << endl;
				}
			}
			else {
				if (c > 2000) {
					cout << "^_^" << endl;
				}
				else if (c == 2000) {
					cout << "Ok!" << endl;
				}
				else {
					cout << "Need more!" << endl;
				}
			}
		}
		else {
			if (c > 1800) {
				cout << "^_^" << endl;
			}
			else if (c == 1800) {
				cout << "Ok!" << endl;
			}
			else {
				cout << "Need more!" << endl;
			}
		}
	}


}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie();
	solve();

}