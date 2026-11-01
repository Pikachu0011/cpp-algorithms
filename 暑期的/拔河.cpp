//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//const int N = 1e3 + 10;
//const ll INF = 0x3f3f3f3f3f3f3f3fll;
//ll a[N], pre[N];
//multiset<ll>se;
//int main()
//{
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        pre[i] = pre[i - 1] + a[i];
//    }
//    for (int i = 1; i <= n; i++)
//        for (int j = i; j <= n; j++)
//            se.insert(pre[j] - pre[i - 1]);
//    se.insert(-INF);
//    se.insert(INF);
//    ll res = LONG_MAX;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int r = i; r <= n; r++)
//        {
//            auto it = se.find(pre[r] - pre[i - 1]);
//            se.erase(it);
//        }
//        for (int l = 1; l <= i; l++)
//        {
//            auto x = se.lower_bound(pre[i] - pre[l - 1]);
//            res = min(res, abs(pre[i] - pre[l - 1] - *x));
//            x--;
//            res = min(res, abs(pre[i] - pre[l - 1] - *x));
//        }
//    }
//    cout << res << '\n';
//    return 0;
//}