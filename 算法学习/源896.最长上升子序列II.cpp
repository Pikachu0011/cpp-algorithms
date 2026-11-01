///*
//I 与 II 的不同点 ： II 的数据范围更大 I的解决方法o(n^2) 会超时
//二分查找q[]中第一个小于a[i] 的数 ， 更新q[l + 1] 为 a[i]
//q[i] 集合 ： 表示长度为i 的子序列集合；
//	 属性 ： 这些子序列尾部最小的数；
//查找过程中更新长度；
//最后输出长度
//*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int n;
//int a[N];
//int q[N];
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
//	q[0] = -2e9;
//	int len = 0;
//	for (int i = 1; i <= n; i++) {
//		int l = 0, r = len;
//		while (l < r) {
//			int mid = l + r + 1>> 1;
//			if (q[mid] < a[i])l = mid;
//			else r = mid - 1;
//		}
//		len = max(len, r + 1);
//		q[l + 1] = a[i];
//	}
//	printf("%d", len);
//
//	return 0;
//}