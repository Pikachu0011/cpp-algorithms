//#include<bits/stdc++.h>
//using namespace std;
//int n;
//const int N = 110;
//int a[N];
//vector<int> get_divisors(int n) {
//	vector<int> c;
//	for (int i = 1; i <= n / i; i++) {
//		if (n % i == 0) {
//			c.push_back(i);
//			if (i != n / i)c.push_back(n / i);
//		}
//	}
//	sort(c.begin(), c.end());
//	return c;
//}
//int main() {
//	scanf("%d", &n);
//	while (n--) {
//		int a;
//		scanf("%d", &a);
//		vector<int> res = get_divisors(a);
//		for (auto i : res) {
//			printf("%d ", i);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
