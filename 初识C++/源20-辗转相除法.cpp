#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int x = m, y = n;
	int b = x % y;
	while (b!=0) {
		x = y;
		y = b;
		b = x % y;
	}
	//此时，y为m和n的最大公约数
	//p=m*n/y;p为m和n的最小公倍数
	int p = m * n / y;
	cout << y << " " << p << endl;




	return 0;
}












