#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
double bian(int s, int x0, int y0) {
	int x1 = s / 60;
	int y1 = s % 60;
	//return x1,y1 -> x0,y0 的度数
	double ha = (x0 % 12 + 1.0 * y0 / 60) * 30;
	double hb = (x1 % 12 + 1.0 * y1 / 60) * 30;
	double sum2 = 1.0 * min(abs(y1 - y0), 60 - abs(y1 - y0)) * 360 / 60;
	double sum1 = min(fabs(ha - hb), 360 - fabs(ha - hb));
	return sum1 + sum2;
}
void solve() {
	int x0, y0, x1, y1, x2, y2;
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
	int s = x1 * 60 + y1;
	int d = x2 * 60 + y2;
	double ans = 1e8;
	const double eps = 1e-9;//10^(-9);
	pii x;//答案
	for (int i = s; i <= d; i++) {
		//cout << i / 60 << " " << i % 60 << endl;
		double t = bian(i, x0, y0);
		if (t  + eps < ans) {
			x = { i / 60,i % 60 };
			ans = t;
		}
	}
	cout << x.first << " "<< x.second << endl;
}
int main() {
	int t;
	cin >> t;
	//t = 1;
	while(t--)solve();
	return 0;
}
/*
x1,y1 -> x2,y2  
  a分 -> b分
枚举i  a -> b 秒
算 i 到 x0，y0 的 转动度数


*/

/*

判断x0,y0
11：00  13：11 ~ 15：33
*/