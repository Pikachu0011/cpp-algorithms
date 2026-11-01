#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt[3];
    for (int i = 0; i < 3; i++) {
        cin >> cnt[i];
    }
    string s;
    cin >> s;
    int n = s.size();
    s += s;
    int ans = 0;
    for (int t = 0; t < 2; t++) {
        int cur[3]{ cnt[0],cnt[1],cnt[2] };
        for (int i = t, j = t; i < n; i += 2) {
            while (j + 2 <= i + n && cur[s[j] - '0' + s[j + 1] - '0'] > 0) {
                cur[s[j] - '0' + s[j + 1] - '0']--;
                j += 2;
            }
            ans = max(ans, j - i);
            cur[s[i] - '0' + s[i + 1] - '0']++;
        }
    }
    cout << ans << endl;
    return 0;
}