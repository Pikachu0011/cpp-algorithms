//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//const int N = 500010;
//int n;
//LL s[N];
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		scanf("%d", &n);
//		LL a = 1e15;
//		for (int i = 1; i <= n; i++) {
//			int x;
//			cin >> x;
//			s[i] = s[i - 1] + x;
//			int l = n / 2 + 1;
//			if (i >= l) {
//				a = min(a, s[i] - s[i - l]);
//			}
//		}
//		cout << a << " " << s[n] - a << endl;
//	}
//
//	return 0;
//}