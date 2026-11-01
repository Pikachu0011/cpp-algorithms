#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
            int t = (s1[i - 1] != s2[i - 1]) ? 1 : 0;//第i列竖直排花费
            dp[i] = min(dp[i], dp[i - 1] + t);
            if (i >= 2) {
                int g = (s1[i - 1] != s1[i - 2]) + (s2[i - 1] != s2[i - 2]);//第i列水平排
                dp[i] = min(dp[i], dp[i - 2] + g);
            }
        }
        cout << dp[n] << '\n';
    }
    return 0;
}
