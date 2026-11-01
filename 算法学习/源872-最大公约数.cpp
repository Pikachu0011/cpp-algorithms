#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL gcd(LL a, LL b) {
	return b == 0 ? a : gcd(b , a % b);
}
int main() {
	LL n;
	scanf("%d", &n);
	while (n--) {
		LL a, b;
		scanf("%d%d", &a, &b);
		cout << gcd(a, b);
	}


	return 0;
}