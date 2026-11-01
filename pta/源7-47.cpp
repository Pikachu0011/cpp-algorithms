#include<bits/stdc++.h>
using namespace std;
int main() {
	int nn;
	cin >> nn;//行
	string str;
	getchar();
	getline(cin, str);
	//cout << str;
	int l ;//列
	if (str.size() % nn == 0) {
		l = str.size() / nn;
	}
	else {
		l = str.size() / nn + 1;
	}
	char arr[100][1000];
	//i列j行
	int index = 0;
	for (int i = l - 1; i >= 0; i--) {
		for (int j = 0; j < nn; j++) {
			arr[j][i] = str[index];
			index++;
		}
	}
	

	for (int j = 0; j < nn; j++) {
		for (int i = 0; i < l; i++) {
			cout << arr[j][i] ;
		}
		cout << endl;
	}
	//cout << l;
	return 0;
}