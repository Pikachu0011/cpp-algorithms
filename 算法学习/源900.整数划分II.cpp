//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1010, mod = 1e9 + 7;
//int n;
//int f[N][N];//f[i][j] 总和是i，并且恰好分为j个数的和；属性是数量
////				状态计算 : f[i][j] = f[i-1][j-1] + f[i-j][j];
////集合划分为两部分 ： 1.最小值是1   2.最小值大于等于1；
//
//
//int main() {
//	cin >> n;
//	f[0][0] = 1;
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= i; j++) {
//			f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % mod;
//		}
//	int res = 0;
//	for (int i = 1; i <= n; i++)res = (res + f[n][i]) % mod;
//	cout << res << endl;
//	return 0;
//}