//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1000010;
//typedef long long LL;
//
//int primes[N], cnt;
//bool vt[N];
//int euler[N];
//int n;
//
//void get_euler(int n) {
//	euler[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		if (!vt[i]) {
//			primes[cnt++] = i;
//			euler[i] = i - 1;
//		}
//		for (int j = 0; primes[j] * i <= n; i++) {
//			vt[primes[j] * i] = 1;
//			if (i % primes[j] == 0) {
//				euler[i * primes[j]] = euler[i] * primes[j];
//				break;
//			}
//			euler[i * primes[j]] = euler[i] * (primes[j] - 1);
//
//		}
//	}
//}
//int main() {
//	scanf("%d", &n);
//	get_euler(n);
//	LL res = 0;
//	for (int i = 1; i <= n; i++) {
//		res += euler[i];
//	}
//	printf("%lld", res);
//
//
//	return 0;
//}