#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 10005;
ll a[N];
ll dp[N];
int main() {
    ll n;
    cin >> n;
    int prefix = 0;
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
        prefix += a[i];
    }
    if (prefix % 2 == 1) {
        cout << "no" << '\n';
        return 0;
    }
    else {
        ll len = prefix / 2;
        for (ll i = 1; i <= n; ++i) {

            for (ll j = len; j >= a[i]; --j) {
                dp[j] = max(dp[j], dp[j - a[i]] + a[i]);

            }

        }
        if (dp[len] == len) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    return 0;
}