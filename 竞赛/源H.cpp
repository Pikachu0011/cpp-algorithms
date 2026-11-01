#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	for (int i = n - 1; i >= 1; i--) {
		if (a[i] > a[i + 1])
			a[i]--;

	}
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i + 1]) {
			cout << "No" << endl;
			return 0;
		}

	}
	cout << "Yes" << endl;


	return 0;
}