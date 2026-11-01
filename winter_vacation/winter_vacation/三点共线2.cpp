//182
#include<bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5, ddd = 3e6;
int n, p0[N], p1[N], p2[N], a, b;
bool vis[(int)6e6 + 5];

int main() {
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (y == 0)p0[a++] = x;
        if (y == 1)p1[b++] = x;
        if (y == 2)vis[x + ddd] = 1;
    }
    sort(p0, p0 + a), a = unique(p0, p0 + a) - p0;
    sort(p1, p1 + b), b = unique(p1, p1 + b) - p1;
    bool flag = 1;
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            int x = 2 * p1[j] - p0[i];
            if (!vis[x + ddd])continue;
            flag = 0;
            printf("[%d, 0] [%d, 1] [%d, 2]\n", p0[i], p1[j], x);
        }
    }
    if (flag)cout << -1;
}