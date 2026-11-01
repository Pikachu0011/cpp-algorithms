//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//const int N = 2e6 + 5;
//int l[N];
//int r[N];
//int ans = 0;
//int main() {
//	l[0] = 0, r[0] = 0;
//	cin >> n >> m;
//	int tt = 0;
//	for (int i = 1; i <= n; i++) {
//		int t;
//		cin >> t;
//		if (t == 0)tt = 1;
//		else if (t > 0){
//			r[t]++;
//		}
//		else {
//			l[abs(t)]++;
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		r[i] += r[i - 1];
//		l[i] += l[i - 1];
//	}
//	for (int i = 1; i <= m; i++) {
//		int sum = l[i];
//		if (m - 2 * i > 0) {
//			sum += r[m - 2 * i];
//		}
//		ans = max(ans, sum);
//		sum = r[i];
//		if (m - 2 * i > 0) {
//			sum += l[m - 2 * i];
//		}
//		ans = max(ans, sum);
//
//	}
//	cout << ans + tt << endl;
//
//
//
//	return 0;
//}