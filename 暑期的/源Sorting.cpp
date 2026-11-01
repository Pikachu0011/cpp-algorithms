#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        // 输入保证 a < b
        adj[a].push_back(b);
    }

    vector<int> g(n + 2, 0);
    // 从 n 向前计算可达最远位置
    g[n] = n;
    // i = n-1 … 1
    for (int i = n - 1; i >= 1; i--) {
        int mx = i;
        for (int v : adj[i]) {
            mx = max(mx, g[v]);
        }
        g[i] = mx;
        // 检查能否到达 i+1
        if (g[i] < i + 1) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
