#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		int a1 = a - 1, b1 = b - 1;
		string s = "";
		for (int i = a1; i <= b1; i++)
			s += str[i];
		str.erase(a1, b1 - a1 + 1);
		string s1, s2;
		cin >> s1 >> s2;
		int size = s1.size() + s2.size();
		string ss = s1 + s + s2;
		str.replace(str.find(s1) + s1.size(), size, ss);
		
	}
	//str.erase(1, 5);
	cout << str << endl;

}