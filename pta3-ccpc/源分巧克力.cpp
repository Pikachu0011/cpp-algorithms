#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

const int N = 100010;
int h[N], w[N];
int n, m;

bool check(int x) {
	int res = 0;
	for (int i = 1; i <= n; i++) {
		res += (h[i] / x) * (w[i] / x);
		if (res >= m)return 1;
	}
	return 0;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> h[i] >> w[i];

	int l = 1, r = 100001;
	while (l < r) {
		int mid = l + r + 1>> 1;
		if (check(mid))l = mid;
		else r = mid - 1;
	}
	cout << l;


	return 0;
}