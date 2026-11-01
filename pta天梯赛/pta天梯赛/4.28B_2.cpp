#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v;
        int numa = 0;
        for (int i = 1; i <= n; ++i) {
            int a;
            cin >> a;
            v.push_back(a);
            if (i > 1) {
                if (max(v[i - 1], v[i - 2]) - min(v[i - 1], v[i - 2]) == __gcd(v[i - 1], v[i - 2])) {
                    numa++;
                }
            }
        }
        cout << numa << endl;
    }
    return 0;
}