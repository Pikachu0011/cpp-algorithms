#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;//点的数量
	int d;//距离
	cin >> n >> d;
	int ans = 0;
	while (n--) {
		int x, y;
		cin >> x >> y;
		if (x * x + y * y <= d * d)
			ans++;
	}
	cout << ans;
}