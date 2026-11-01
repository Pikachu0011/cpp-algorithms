#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, s, t;
        cin >> n >> s >> t;
        vector<int> match(2 * n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int ai; cin >> ai;
            match[i] = ai;
            match[ai] = i;
        }
        if (s == t) {
            cout << "Yes\n";
            continue;
        }
        if (match[s] == t) {
            cout << "No\n";
            continue;
        }
        bool sLeft = (s <= n);
        bool tLeft = (t <= n);
        if (sLeft != tLeft) {
            cout << "Yes\n";
            continue;
        }
        // same side, different pairs
        if (n >= 3) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
