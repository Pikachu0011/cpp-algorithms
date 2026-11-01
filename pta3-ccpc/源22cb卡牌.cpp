#include<bits/stdc++.h>
using namespace std;
const int N = 200010, INF = 0x3f3f3f3f;
int a[N], b[N];
int n, m;

bool check(int x) {
	//int tm = m;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] < x) {
			if (a[i] + b[i] < x)return 0;
			sum += (x - a[i]);
		}
	}
	if (sum > m)return 0;

	return 1;
}
int main() {
	cin.tie();
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)cin >> b[i];
	int l = 0, r = 4000001;
	while (r > l) {
		int mid = l + r + 1>> 1;
		if (check(mid)) l = mid;
		else r = mid;
	}
	cout << l;

	return 0;
}