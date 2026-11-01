//171
#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int ans;
int l, n;
int col[N], row[N];
void dfs(int x, int y) {
    if (x == n + 1 && y == 1) {
        bool flag = 1;
        for (int i = 1; i <= n; i++) {
            if (row[i] != l)flag = 0;
            if (col[i] != l)flag = 0;
        }
        if (flag)ans++;
        return;
    }
    int maxx = min(l - row[x], l - col[y]);
    for (int i = 0; i <= maxx; i++) {
        row[x] += i;
        col[y] += i;
        if (y == n) {
            if (row[x] != l) {
                row[x] -= i;
                col[y] -= i;
                continue;
            }
            dfs(x + 1, 1);
            row[x] -= i;
            col[y] -= i;
        }
        else {
            dfs(x, y + 1);
            row[x] -= i;
            col[y] -= i;
        }

    }
}
int main() {
    cin >> l >> n;
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}