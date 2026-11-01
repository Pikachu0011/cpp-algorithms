#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e6;
LL p[N];
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
			//cout << i << endl;
			p[j] = i;
			j++;
		}
	}

	/*for (int k = 0; k <= j; k++) {
		cout << p[k] << endl;
	}*/
	cin >> T;
	while (T--) {
		LL x;
		cin >> x;
		LL x1 = x;
		LL n1 = 0, n2 = 0, n3 = 0;
		int flag = 0;
		int i = 0;
		for (i = 0; i < j; i++) {
			if (x % p[i] == 0 && flag == 0) {
				//cout << p[i] << endl;
				n1 = p[i];
				flag = 1;
			}
			if (x % p[i] == 0 && flag == 1 && p[i] != n1) {
				//cout << p[i] << endl;
				n2 = p[i];
				flag = 2;
				break;
			}
		}
		int cnt = 0;
		if (flag == 1) {

			while (x) {
				cnt++;
				x /= n1;
			}
		}
		if (cnt >= 7) {
			n2 = n1 * n1;
			n3 = n1 * n1 * n1;
			flag = 2;
		}
		//cout<<cnt<<endl;
		if (flag < 2 || (n3 == n1) || (n3 == n2))cout << "NO\n";
		else {
			cout << "Yes\n";
			cout << n1 << " " << n2 << " " << n3 << endl;
		}
	}

	return 0;
}