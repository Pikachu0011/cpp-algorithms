#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main() {
	int m;
	cin >> m;
	LL s = 1;
	for (int i = 1; i <= m - 1; i++) {
		s *= 2;
		s %= 998244353;
	}
	cout << s << endl;
	return 0;
}