////f[i] 以第i个数结尾的递增子序列的集合  属性是max；
////状态计算   枚举可能的倒数第二个数（从1~i-1）
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1010;
//int a[N];
//int f[N];
//int res = 0;
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for (int j = 1; j <= i - 1; j++) {
//			if (a[j] < a[i])f[i] = max(f[i], f[j] + 1);
//		}
//	}
//	for (int i = 1; i <= n; i++)res = max(res, f[i]);
//	printf("%d", res);
//	return 0;
//}