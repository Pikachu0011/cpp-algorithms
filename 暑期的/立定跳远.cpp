#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
int a[N];

int n, m;
bool check(int x) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int d = a[i] - a[i - 1];
		int tt = d / x + (d % x != 0) - 1;
		if (cnt + tt > m)return 0;
		else cnt += tt;
	}
	return 1;
}
int main() {
	cin >> n >> m;
	m++;
	for (int i = 1; i <= n; i++)cin >> a[i];
	int l = 0, r = a[n] + 1;
	while (l+1 != r) {
		int mid = (l + r)/2;
		if (check(mid)) {
			r = mid;
		}
		else l = mid;
	}
	cout << r;

	return 0;
}