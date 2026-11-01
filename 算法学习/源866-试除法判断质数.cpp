#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
	if (x < 2)return false;
	for (int i = 2; i < x / i; i++) {
		if (x % i == 0)return false;

	}
	return true;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;

		if (is_prime(x))cout << "Yes\n";
		else cout << "No\n";
	}


	return 0;
}