#include<bits/stdc++.h>
using namespace std;
const int N = 1<<20;
typedef long long ll;
typedef pair<int, int> pii;
int f[N];
void creat(int i,int x) {
	if (!f[i]) {
		f[i] = x;
	}
	else {
		if (x > f[i])creat(2 * i, x);
		else creat(2 * i + 1, x);
	}
}
void solve() {
	int n;
	cin >> n;
	int tn = n;
	while (tn--) {
		int x;
		cin >> x;
		creat(1, x);
	}
	bool flag = 1;
	bool t0 = 0;
	int idx;
	for (int i = 1; i < 100; i++) {
		//if (f[i] == 0)break;
		if (f[2 * i] || f[2 * i + 1]) {
			if (f[2 * i] != 0 && f[2 * i] <= f[i])flag = 0;
			if (f[2 * i + 1] != 0 && f[2 * i + 1] >= f[i])flag = 0;
		}
		if (f[i] == 0) {
			if (!t0) {
				idx = i;
				t0 = 1;
			}
			if (idx != n + 1) {
				flag = 0;
			}
		}
		if (f[i] != 0 && t0) {
			flag = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i != 1)cout << " ";
		cout << f[i];
	}
	cout << endl;
	if (flag)cout << "YES\n";
	else cout << "NO\n";

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();



	return 0;
}