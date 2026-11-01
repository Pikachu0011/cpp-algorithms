#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

// 统计价值 > mid 的区间数量
ll countGt(const vector<int>& a, ll mid) {
    ll count = 0;
    int n = a.size();
    for (int r = 0; r < n; ++r) {
        int current_max = a[r];
        int current_min = a[r];
        for (int l = r; l >= 0; --l) {
            current_max = max(current_max, a[l]);
            current_min = min(current_min, a[l]);
            ll value = (ll)current_max * current_min * (r - l + 1);
            if (value > mid) {
                count += l + 1;
                break;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll left = 1;
    ll right = (ll)*max_element(a.begin(), a.end()) * *max_element(a.begin(), a.end()) * n;

    while (left < right) {
        ll mid = (left + right) / 2;
        if (countGt(a, mid) < k) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    cout << left << endl;
    return 0;
}