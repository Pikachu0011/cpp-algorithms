#include<bits/stdc++.h>
using namespace std;
int main() {
	long long x;
	cin >> x;
	int count = 0;
	long long j;
	for (long long i = 1; ; ) {
		//cout << i << endl;
		for ( j = x; j * x <= i; j++) {
			if (j * x == i) {

				break;
			}
		}
		count++;
		if (j * x == i) {
			break;
		}
		i = i * 10 + 1;

	}
	cout << j << " " << count << endl;

	return 0;
}