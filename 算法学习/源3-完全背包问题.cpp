///*
//f[i][j]  只考虑前 i 个物品 ， 总体积不超过 j 的选法的集合；
//状态表示为  max  总价值最大
//f[i][j] = max(f[i-1][j] , f[i - 1][j - v[i]] + w[i] , f[i - 1][j - 2*v[i]] + 2*w[i] ,... )
//f[i][j - v[i]] = max(f[i-1][j - v[i]] , f[i - 1][j - 2*v[i]] + w[i],....)
//f[i][j] = max(f[i-1][j] , f[i][j - v[i]] + w[i]);
//*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1010;
//int f[N];
//int v[N], w[N];
//int n, m;
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d%d", &v[i], &w[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = v[i]; j <= m; j++)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//	printf("%d", f[m]);
//	return 0;
//}