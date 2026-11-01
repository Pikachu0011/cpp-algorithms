#include<bits/stdc++.h>
using namespace std;
int main() {

	int l, n;
	cin >> l >> n;
	int sum = pow(26, l);    // 若 l = 3 则每位都有 26 * 26 * 26 = 26 ^ 3  种可能
	int k = sum - n;         // 倒数第N个 调成正着(第 k 个)比较好理解 1 加了 k 次
	char ans[10] = { 0 };   // 答案存入

	for (int i = l - 1; i >= 0; i--)    // 从最低位开始
	{
		// 类比 10进位 会很好理解
		ans[i] = k % 26 + 'a';       // + 'a'  转成字母
		k /= 26;                     // 进到前一位
	}

	cout << ans << endl;     // 打印



	return 0;
}