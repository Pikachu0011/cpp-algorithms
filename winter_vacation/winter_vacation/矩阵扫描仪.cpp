#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10, MOD = 1e9 + 7;
typedef long long LL;
char a[N][N];
LL cnt[30];
int T;
int n, op;
string ans;
void op1() {
	int k = 1, i = 1, j = 1;
	bool flag = 0;
	while (1) {
		if (k & 1) {
			for (i = k, j = 1; i >= 1; i--, j++) {
				if(!flag)ans += a[i][j];
			}
		}
		else {
			for (i = 1, j = k; i <= k; i++, j--) {
				if(!flag)ans += a[i][j];
			}
		}
		if (k == n)flag = 1;

		if (!flag)k++;
		else k--;
		if (k == 1 && flag) break;
	}
}
int main() {
	cin >> n >> op;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	if (op == 1)op1();
	cout << ans << endl;

	return 0;
}