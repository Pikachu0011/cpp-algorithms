///*裴蜀定理：有一对正整数a，b 那么一定存在整数 x , y ，使得a*x + b * y = gcd(a,b);
//扩展欧几里得算法就是在求最大公约数的同时求出x 和 y 的值（x,y  不唯一）；
//*/
//#include<bits/stdc++.h>
//using namespace std;
//int exgcd(int a, int b, int& x, int& y) {
//	if (b == 0) {
//		x = 1, y = 0;
//		return a;
//	}
//	else {
//		int d = exgcd(b, a % b, y, x);
//		y = y - a / b * x;
//		return d;
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		int x, y;
//		exgcd(a, b, x, y);
//		printf("%d %d", x, y);
//	}
//
//
//	return 0;
//}