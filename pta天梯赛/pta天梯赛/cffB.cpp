#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
#define int long long
#define x first
#define y second
typedef pair<int, int> pii;
set<int> se;
int arr[N];

void solve() {
	int a1, a2, a3, a4, a5;
	int b1, b2, b3, b4, b5, b6, b7, b8;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8;
	int t = a1 + a2 + a3 + a4 + a5;
	int b = b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8;
	double xx = 1.0 * 100 / (t + 5 * b);
	double yy = 1.0 / b;
	double ans = (a1 + a2 + 0.8 * a3 + 0.5 * a4) * xx + (5 * b1 + 5 * b2 + 5 * b3 + 4 * b4 + 3 * b5 + 2.5 * b6 + 2 * b7) * xx;
	ans += (1 * b1 + 0.75 * b2 + 0.5 * b3 + 0.4 * b4 + 0.4 * b5 + 0.4 * b6 + 0.3 * b7) * yy;
	
	//printf("%.4f", ans);
	double res = (int)(ans * 10000) / 10000.0;

	// 2. 固定输出4位小数
	cout << fixed << setprecision(4) << res << endl;
}

signed main() {
	//	ios::sync_with_stdio(false);
	//	cin.tie(nullptr);
	int t;
	t = 1;
	while (t--)solve();
	return 0;
}