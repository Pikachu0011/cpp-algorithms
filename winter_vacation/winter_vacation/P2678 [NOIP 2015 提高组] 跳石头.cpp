#include<bits/stdc++.h>
using namespace std;
const int N = 5e4 + 10;

int l, n, m;
int D[N];

bool check(int mid) {
	int cnt = 0;
	int last = 0;
	for (int i = 1; i <= n; i++) {
		if (D[i] - last < mid)cnt++;
		else last = D[i];
	}
	return cnt <= m;
}
int main() {
	cin >> l >> n >> m;
	for (int i = 1; i <= n; i++)cin >> D[i];
	n++;
	D[n] = l;
	int L = 1, R = l + 1;
	while (L < R) {
		int mid = (L + R + 1) >> 1;
		if (check(mid)) {
			L = mid;
		}
		else R = mid - 1;
	}
	cout << L << endl;
	return 0;
}