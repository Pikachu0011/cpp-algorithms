#include<bits/stdc++.h>
using namespace std;
int main() {
	int l, r;
	string str;
	cin >> l >> r >> str;
	string str2;
	for (int i = l - 1; ; i++) {
		if (i >= r)
			break;
		char temp = str[i];
		str[i] = str[r - 1];
		str[r - 1] = temp;
		r--;
	}
	cout << str << endl;
	

	return 0;
}