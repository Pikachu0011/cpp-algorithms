#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 10000010;
bool vt[N];
int prime[N];
LL ans;
void solve(LL n) {
	int cnt;
	for (LL i = 2; i <= n; i++)
	{
		if (vt[i])continue;
		vt[i] = 1;
		prime[cnt++] = i;
		for (int j = i + i; j <= n; j += i) {
			vt[j] = 1;
		}
	}
	cout << cnt << "\n";

}
int main() {
	int n;
	cin >> n;
	solve(n);

	return 0;
}