#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1 = "123", s2 = "234";
	s1 += 'a';
	cout << s1 << endl;
	cout << s1 + s2 << endl;
	string s3 = "12341234";
	cout << s3.substr(3) << endl;//取从下标为3到结尾。
	cout << s3.substr(3 , 3) << endl;//取从下标为3，取三个。
	cout << s3.find("341") << endl;//找出子串首位的下标。
	if (s3.find("341") != string::npos) {//如果没有找到，返回（string::npos）这是一个数。
		cout << "yes" << endl;
	}

	return 0;
}