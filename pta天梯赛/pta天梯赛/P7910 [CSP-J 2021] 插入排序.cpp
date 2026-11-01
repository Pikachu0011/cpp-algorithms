#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;

int a[N];
int n, q;
void solve() {
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	while (q--) {
		int op;
		scanf("%d", &op);
		if (op == 1) {
			int x, v;
			scanf("%d%d", &x, &v);
			a[x] = v;
		}
		else {
			int x;
			scanf("%d", &x);
			int ans = n;
			for (int i = x+1; i <= n; i++) {
				if (a[i] >= a[x])ans--;
			}
			for (int i = 1; i < x; i++) {
				if (a[i] > a[x])ans--;
			}
			printf("%d\n", ans);
		}
	}
}
int main() {
	int t;
	t = 1;
	while(t--)solve();
	return 0;
}
