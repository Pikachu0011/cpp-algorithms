#include<bits/stdc++.h>
using namespace std;
int main() {
	int n0, n1, n;
	cin >> n0 >> n1 >> n;
	bool flag = 0;
	int cha = 9999;
	int m0;
	for (int i = 1; i < n && i<n0 && (n-i) < n1; i++) {
		if (n0 % i == 0 && n1 % (n - i) == 0) {
			flag = 1;
			if (cha > abs(n0 / i - n1 / (n - i))) {
				cha = abs(n0 / i - n1 / (n - i));
				m0 = i;
			}
		}
	}
	if (flag)cout << m0 << " " << n - m0;
	else cout << "No Solution";

	return 0;
}