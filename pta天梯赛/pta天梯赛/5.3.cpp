#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    // 第一步：排序数组
    sort(a.begin(), a.end());

    // 第二步：邻接表（哈希表）key=差值，value=这个差值的数对数量
    unordered_map<int, ll> cnt;

    // 第三步：枚举所有数对，计算所有差值，存入邻接表
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int d = a[j] - a[i];
            cnt[d]++; // 统计该差值的数对个数
        }
    }

    // 第四步：把所有差值拿出来，从小到大排序
    vector<int> diffs;
    for (auto& p : cnt) {
        diffs.push_back(p.first);
    }
    sort(diffs.begin(), diffs.end());

    // 第五步：从小到大取数对，直到取满k个
    ll ans = 0;
    for (int d : diffs) {
        if (k <= 0) break;

        ll num = cnt[d];   // 这个差值一共有多少个数对
        ll take = min(num, k); // 能取多少个
        ans += take * d;   // 累加答案
        k -= take;         // 减少需要取的数量
    }

    cout << ans << endl;
    return 0;
}