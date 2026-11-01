#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e7 + 9;//10^7再平方的范围肯定是大于23333333333333
ll ans = 0;
ll prime[N];
bool vis[N];

int main() {
    int n = sqrt(N);
    for (int i = 2; i <= n; i++) {// 埃氏筛
        if (!vis[i]) {
            for (int j = i * i; j <= N; j += i) {
                vis[j] = true;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i <= N; i++) {
        if (!vis[i]) {
            prime[cnt++] = i;
        }
    }
    for (ll i = 0; i < cnt; i++) {
        ll pp = prime[i] * prime[i];
        if (pp * pp > 23333333333333) break;//一点小优化
        for (ll j = i + 1; j < cnt; j++) {
            ll qq = prime[j] * prime[j];
            if (pp * qq > 23333333333333) break;
            if (pp * qq < 2333) continue;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}