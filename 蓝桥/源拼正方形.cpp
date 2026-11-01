#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
	LL S = 7385137888721 * 2 * 2 + 10470245;
	//cout << S << "\n";
	LL a = 100000;
	while (a * a < S)a++;
	//cout << a * a << "\n";
	cout << a - 1;


	return 0;
}