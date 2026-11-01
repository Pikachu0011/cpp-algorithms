//133
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
struct k {
    int num, a, b, c;
}pre[N];
bool cmp(k x, k y) {
    if (x.a != y.a)
        return x.a < y.a;
    if (x.b != y.b)
        return x.b > y.b;
    if (x.c != y.c)
        return x.c < y.c;
    return x.num < y.num;
}
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> pre[i].a >> pre[i].b >> pre[i].c;
        pre[i].num = i;
    }
    sort(pre + 1, pre + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (i != 1)cout << " ";
        cout << pre[i].num;
    }

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}