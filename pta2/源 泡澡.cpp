#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector<int> d(N);
int main() {
	int n, m;
	cin >> n >> m;
	int maxx = 0;
	int minn = 1e9;
	while (n--) {
		int a, b, t;
		cin >> a >> b >> t;
		minn = min(minn, a);
		maxx = max(maxx, b);
		d[a] += t;
		d[b] -= t;
	}
	//d[i] = d[i] + d[i - 1];
	for (int i = minn; i <= maxx; i++) {
		d[i] = d[i] + d[i - 1];
		if (d[i] > m) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}