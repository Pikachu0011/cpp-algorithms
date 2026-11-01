#include<bits/stdc++.h>

using namespace std;
const int N = 100010, P = 131;//P 为经验值，冲突概率几乎为零
typedef unsigned long long ULL;//少一部取模
int n, m;
char s[N];
ULL h[N], p[N];//所有的前缀字符串哈希值   P 的幂次

bool solve(int l1, int r1, int l2, int r2) {
	ULL sum1 = h[r1] - h[l1 - 1] * p[r1 - l1 + 1];
	ULL sum2 = h[r2] - h[l2 - 1] * p[r2 - l2 + 1];

	return sum1 == sum2;
}
int main() {
	cin >> n >> m;
	cin >> s + 1;

	p[0] = 1;
	for (int i = 1; i <= n; i++) {
		h[i] = h[i - 1] * P + s[i];//将字符串看作P进制的数进行哈希
		p[i] = p[i - 1] * P;
	}
	while (m--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (solve(l1, r1, l2, r2))cout << "Yes\n";
		else cout << "No\n";

	}


	return 0;
}