#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e7 + 9;
LL prime[N];
bool vt[N];//ÊÇ·ñ±»É¸
LL cnt;
LL ans;
void solve() {
	for (LL i = 2; i <= N; i++) {
		if (vt[i])continue;
		prime[cnt++] = i;
		for (LL j = i + i; j <= N; j += i) {
			vt[j] = 1;
		}
	}
	cout << cnt << "\n";

}
int main() {
	solve();
	//sort(prime, prime + cnt);
	for (LL i = 0; i < cnt; i++) {
		LL pp = prime[i] * prime[i];
		if (pp * pp > 23333333333333)break;
		for (LL j = i + 1; j < cnt; j++) {
			LL qq = prime[j] * prime[j];
			if (pp * qq > 23333333333333)break;
			if (pp * qq < 2333)continue;
			ans++;
		}
	}
	cout << ans;


	return 0;
}