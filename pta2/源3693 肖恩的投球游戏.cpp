#include<bits/stdc++.h>
using namespace std;
int n;
int m;
//vector<int> v(1000);
int v[10000];
int d[10000];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> v[i];
	for (int i = 1; i <= n; i++) {
		d[i] = v[i] - v[i - 1];
	}
	while (m--) {
		int l, r, c;
		cin >> l >> r >> c;
		d[l] += c;
		d[r + 1] -= c;

	}
	for (int i = 1; i <= n; i++) {
		if (i != 1)cout << " ";
		d[i] = d[i - 1] + d[i];
		cout << d[i];
	}

	return 0;
}