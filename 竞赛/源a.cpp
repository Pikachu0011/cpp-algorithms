//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2e5 + 10;
//const int inf = 2e9;
//const long long llf = 9e18;
//typedef pair<int, int> PII;
//typedef long long ll;
//map<ll, ll> mp;
//set<int> se;
//ll a[N];
//int main()
//{
//    ll n, k;
//    cin >> n >> k;
//    ll res = 0;
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i];
//        a[i] += a[i - 1];
//    }
//    mp[0]++;
//    for (int r = 1; r <= n; r++) {
//        res += mp[a[r] - k];
//        mp[a[r]]++;
//    }
//    cout << res << endl;
//}
