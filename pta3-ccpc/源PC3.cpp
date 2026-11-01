//n的二进制表示中第k位是几
//（1） 先把第k位移到最后一位  n >> k
// (2)  看个位是几  x&1
//   （n>>k）&1
//   1010
//右移0  1010
//右移1   101
/*
lowbit(x) 返回x的最后一位1；x&(-x) -> x&(~x + 1);//"~"取反
x		lowbit(x)
1010      10
101000	   1000
*/
int lowbit(int x) {
	return x & -x;
}
#include<bits/stdc++.h>
using namespace std;
bool is_3(int x) {
	int res = 0;
	while (x) {
		//cout << x << endl;
		x -= lowbit(x), res++;

	}
	if (res == 3)return 1;
	else return 0;
}
int main() {
	int n;
	cin >> n;


	while (n--) {
		int x;
		cin >> x;
		int res = 0;
		while (x) {
			//cout << x << endl;
			x -= lowbit(x), res++;

		}

		cout << res << " ";
	}//每次减去x的最后一位1；



	return 0;
}
