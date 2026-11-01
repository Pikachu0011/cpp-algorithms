#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N];
int n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		res += abs(a[i] - a[(n + 1) / 2]);
	}
	cout << res << endl;
	return 0;
}