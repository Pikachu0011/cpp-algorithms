//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int a[N];
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		a[i] = a[i - 1] + a[i];
//	}
//	while (m--) {
//		int aa, bb;
//		scanf("%d%d", &aa, &bb);
//		printf("%d\n", a[bb] - a[aa - 1]);
//	}
//
//	return 0;
//}