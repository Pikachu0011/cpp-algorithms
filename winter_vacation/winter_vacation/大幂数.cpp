//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<ll, ll> pii;
//set<ll> se;
//void solve() {
//	ll n;
//	cin >> n;
//	pii ans;
//	bool flag = 0;
//	for (int i = 30; i >= 1; i--) {
//		ll sum = 0;
//		ll j = 1;
//		while (1) {
//			sum += pow(j, i);
//			if (sum == n) {
//				flag = 1;
//				//cout<<sum<<" "<<n<<endl;
//				ans = { j,i };//m^k
//				//cout << ans.first << " " << ans.second << endl;
//				break;
//			}
//			else if (sum > n)break;
//			j++;
//		}
//		if (flag)break;
//	}
//	for (int m = 1; m <= ans.first; m++) {
//		if (m != 1)cout << '+';
//		cout << m << "^" << ans.second;
//	}
//	if (!flag)cout << "Impossible for " << n << ".";
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}