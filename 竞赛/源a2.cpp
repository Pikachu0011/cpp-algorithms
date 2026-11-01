//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N = 2e5 + 5;
//int a[N];
//
//map<ll, ll> mp;
//
//int main() {
//	ll n;
//	ll k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		
//		a[i] += a[i - 1];
//
//	}
//	ll res = 0;
//	mp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		res += mp[a[i] - k];
//		mp[a[i]]++;
//
//	}
//	cout << res << endl;
//
//
//
//	return 0;
//}