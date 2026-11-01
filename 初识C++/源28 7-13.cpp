#include<iostream>
#include<math.h>
using namespace std;
void prime(long long x) {
	if (x <= 1) {
		cout << "No" << endl;
		return;
	}

	for (long long i = 2; i <= pow(x, 0.5); i++) {
		if (x % i == 0) {
			cout << "No" << endl;
			return;
		}

	}
	cout << "Yes" << endl;

}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long y;
		cin >> y;
		prime(y);

	}


	return 0;
}