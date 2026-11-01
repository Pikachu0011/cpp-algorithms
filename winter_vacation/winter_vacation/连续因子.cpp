#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
vector<int> ans;
void solve() {
	ll num;
	cin >> num;
	int len, maxlen = 0;
	int start = 0;
	for (int i = 2; i <= sqrt(num); i++) {
		//cout << i << endl;
		ll j = i;
		len = 0;
		ll temp = num;
		while (temp % j == 0) {
			//cout << j << endl;
			temp /= j;
			j++;
			len++;
		}
		//cout << "temp :" << temp << endl;
		if (len > maxlen)start = i;
		maxlen = max(maxlen, len);
	}
	//cout << start << " " << maxlen;
	cout << maxlen << endl;
	for (int i = start; i <= start + maxlen - 1; i++) {
		if (i != start)cout << "*";
		cout << i;
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