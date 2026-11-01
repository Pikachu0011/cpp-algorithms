#include<bits/stdc++.h>

using namespace std;

void solve(int x) {
	for (int i = 2; i <= x / i; i++) {
		if (x % i == 0) {
			int s = 0;
			while (x % i == 0) {
				s++;
				x /= i;
			}
			cout << i << " " << s << "\n";
		}
	}
	if (x > 1)cout << x << " " << 1 << "\n";
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		solve(a);
		cout << "\n";
	}
	return 0;
}