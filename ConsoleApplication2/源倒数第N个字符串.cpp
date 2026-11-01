#include<bits/stdc++.h>
using namespace std;
int sum;
char arr[10];
int l, n;
int main() {
	cin >> l >> n;
	sum = pow(26, l);
	int k = sum - n ;//ÕýÊý
	for (int i = l - 1; i >= 0; i--) {
		char temp = k % 26 + 'a';
		arr[i] = temp;
		k /= 26;
	}
	for (int i = 0; i < l; i++) {
		cout << arr[i];
	}


	return 0;
}