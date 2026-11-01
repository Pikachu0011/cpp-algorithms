#include<bits/stdc++.h>
using namespace std;
int main() {
	string s, s2, str;
	getline(cin, s);
	cin >> str;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;

		}
		if (s[i] < 'A' || s[i]>'z')s[i] = ' ';
		else {
			if (s[i] > 90 && s[i] < 97) {
				s[i] = ' ';
			}
		}
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')str[i] += 32;
	}
	int cnt = 0;
	stringstream ss(s);
	while (ss >> s2) {
		int pos = s2.find(str);//查找str是否是s2的子串
		if (pos != -1)cnt++;
	}
	/*while (ss >> s2) {
		if (s2 == str)cnt++;//查找str单词的数量
	}*/
	cout << cnt;

	return 0;
}
