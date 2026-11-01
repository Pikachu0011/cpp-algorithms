#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    if (total == s) {
        cout << n << endl;
    }
    else {
        cout << n - 1 << endl;
    }
    return 0;
}