#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, MOD = 1e9 + 7;
typedef long long LL;
LL a[N], b[N], c[N], pow2[30];
LL cnt[30];
int T;
void p2() {
	pow2[0] = 1;
	for (int i = 1; i <= 25; i++) {
		pow2[i] = pow2[i - 1] * 2 % MOD;
	}
}
void ji(int a) {
	int k = 0;
	while (a) {
		if (a & 1)cnt[k]++;
		a >>= 1;
		k++;
	}
}
int main() {
	cin >> T;
	p2();
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			ji(x);
		}
		LL ans = 0;
		while (1) {
			LL val = 0;
			for (int i = 0; i < 25; i++) {
				if (cnt[i] >= 1) {
					cnt[i]--;
					val = (val + pow2[i]) % MOD;
				}
			}
			ans = (ans + val * val % MOD) % MOD;
			bool flag = 0;
			for (int i = 0; i <= 25; i++) {
				if (cnt[i] >= 1)break;
				if (i == 25 && cnt[i] == 0)flag = 1;
			}
			if (flag)break;
		}
		cout << ans << endl;
	}
	return 0;
}