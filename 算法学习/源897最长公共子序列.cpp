/*
f[i][j]  只考虑a串的前i个字母和b串的前j个字母，所有的公共子序列的集合；
属性是    所有子序列的最大长度
状态计算：f[i][j]
如果a[i] != b[j] // 因为他俩不相等 所以再考虑i j 的子问题就可以
	f[i][j] = max(f[i-1][j],f[i][j-1]) a串前i-1个字母和b串前j个字母与a串前i个字母和b串前j-1个字母的公共子序列的较大值
如果a[i] == b[j] f[i][j] = f[i-1][j-1]+1;a串前i-1个字母和b串前j-1个字母的公共子序列max＋1；
! ! ! ! ! < < 代码没有分情况讨论 > > ;
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
char a[N], b[N];
int f[N][N];
int n, m;
int main() {
	scanf("%d%d", &n, &m);
	scanf("%s%s", a + 1, b + 1);
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= m; j++) {
			f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			if (a[i] == b[j])f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
		}
	printf("%d", f[n][m]);
	return 0;
}