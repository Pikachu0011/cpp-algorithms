/*
欧拉函数定义：n的欧拉函数值为从1~n中与n互质的数的个数；
a 与 b 互质：a和b没有除1以外的相同的约数；
n = p1^a1 + p2^a2 + p3^a3 + ... + pm^am;(n 因式分解 后)
在算数基本定理中 欧拉函数 f(n) = n * (1 - 1 / p1) * (1 - 1 / p2 )* ...*(1 - 1/pm);
等价于 n / p1 * (p1 - 1) 等；

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 110;
typedef long long LL;

int n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		int res = a;
		for (int j = 2; j <= a / j; j++) {
			if (a % j == 0) {
				res = res / j * (j - 1);
				while (a % j == 0)a /= j;
			}
			
		}
		if (a > 1)res = res / a * (a - 1);
		cout << res << "\n";
	}


	return 0;
}