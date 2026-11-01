#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getchar();
	getline(cin, s);
	string min;
	//getchar();
	getline(cin, min);
	if (s.find(min) != -1) {
		cout << "敏感词的起始位置为" << s.find(min) + 1 << endl;
	}
	else {
		cout << "没有敏感词" << endl;
	}
	return 0;
}