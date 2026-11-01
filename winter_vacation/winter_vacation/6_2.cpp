#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e6;
LL p[N],n[N];
int T;
bool isp(LL x) {
	for (int i = 2; i <= x / i; i++) {
		if (x % i == 0)return false;
	}
	return true;
}
int main() {
	LL j = 0;
	for (int i = 2; i <= 10000; i++) {
		if (isp(i)) {
			p[j] = i;
			j++;
		}
	}
	cin >> T;
	while (T--) {
		LL x;
		cin >> x;
		LL x1 = x;
		LL n1 = 0, n2 = 0, n3 = 0;
		int flag = 0;
		int i = 0;
		for (i = 0; i < j; i++) {
			if (x % p[i] == 0) {
				
				n[flag] = p[i];
				flag++;
				x /= p[i];
				i = i - 1;
			}
			
		}
		n[flag] = x;
		if (flag >= 3) {
			n1 = n[0];
			LL tn2 = n[1];

			if (tn2 == n1) {
				tn2 *= n[2];
			}
			if (tn2 != n1) {
				n2 = tn2;
			}
			n3 = (x1 / n1) / n2;
			if (n1 != n3 && n2 != n3 && n3 >= 2) {
				cout << "YES\n";
				cout << n1 << " " << n2 << " " << n3 << endl;
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "NO\n";
		}
		
	}

	return 0;
}