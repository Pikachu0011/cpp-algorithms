#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	//cout << str;
	if (str.find("MM") != -1 || str.find("FF") != -1) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

	return 0;
}