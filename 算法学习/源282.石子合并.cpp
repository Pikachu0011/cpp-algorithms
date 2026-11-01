///*
//区间dp : 通常状态为一个区间
//f[i][j]  集合表示为区间[i, j]中所有石子堆成一堆的方式；
//		 属性为 所耗费的代价最小方式的代价
//状态计算 ： 枚举 k 从i ~ j - 1 作为分界线
//		   f[i][j] = min(f[i][i]+f[i+1][j]+s[i~j] , f[i][i+1]+f[i+2][j]+s[i~j]..... )
//*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 310;
//int s[N];
//int f[N][N];
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &s[i]);
//	for (int i = 1; i <= n; i++)s[i] = s[i] + s[i - 1];
//	for(int len = 2;len <= n;len ++)
//		for (int i = 1; len + i - 1 <= n; i++) {
//			int j = len + i - 1;
//			f[i][j] = 1e9;
//			for (int k = i; k <= j - 1; k++) {//左区间从[i,i]开始
//				f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
//			}
//		}
//	//j-i+1 = len
//	printf("%d", f[1][n]);
//	return 0;
//}