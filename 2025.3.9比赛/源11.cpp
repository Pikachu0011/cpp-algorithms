#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N = 110;

int n, tc, tm;
LL a[N], b[N], c[N];

bool check(LL mid) {
	LL minn = max(0ll, mid + 1 - tm), maxx = min(mid, tc - 1ll);
	for (int i = 0; i < n; i++) {
		double l = b[i] - a[i];
		double r = c[i] - a[i] * tc - b[i] * (tm - mid);

		if (l == 0 && r < 0)return false;
		else if (l > 0)maxx = min(maxx, (LL)floor(r / l));
		else if (l < 0)minn = max(minn, (LL)ceil(r / l));
	}
	return maxx > minn;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> n >> tc >> tm;
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i] >> c[i];

		}
		LL l = 0, r = tm + tc - 2;
		while (l < r) {
			LL mid = l + r >> 1;
			if (check(mid))r = mid;
			else l = mid + 1;
		}
		cout << r << endl;
	}

	return 0;
}