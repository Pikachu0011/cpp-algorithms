#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 676767677;
void solve() {
	int n;
	cin >> n;
	int flag2 = 0;
	int flag1 = 0;
	ll sum = 0;
	ll arr[1000];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		ll x = arr[i];
		if (x > 1) {
			sum = (sum + x) % MOD;
		}
	 }
	bool flag = 0;
	for (int i = n; i >= 1; i--) {
		if (arr[i] == 1) {
			flag1 = 1;
		}
		if (arr[i] > 1 && !flag1) {
			//flag2 = 1;
			break;
		}
		if (i== 1 && flag1 && !flag2) {
			flag = 1;
		}
	 }
	cout << (sum + flag) % MOD << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}


	return 0;
}