#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	/*int c = 4 & 6;
	cout << c << endl;*/
	ll T;
	cin >> T;
	while (T--) {
		ll a, s;
		cin >> a >> s;

		s -= 2 * a;
		if (s < 0) {
			cout << "No\n";
			continue;
		}
		ll ans = s & a;
		if (ans == 0)cout << "Yes\n";
		else cout << "No\n";
	}


	return 0;
}