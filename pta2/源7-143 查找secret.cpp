#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int i, c = 0 , f;//位置 计数器 有没有secret
	getline(cin, s);
	for (i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			if (s[i] == 's' && s[i + 1] == 'e' && s[i + 2] == 'c' && s[i + 3] == 'r' && s[i + 4] == 'e' && s[i + 5] == 't') {
				cout << "\"secret\" is pos " << c + 1 << endl;
				f = 1;
			}
			else {
				for (i = i + 1; i < s.size(); i++) {
					if (s[i] == ' ') {
						c++;
						break;
					}
				}

			}
		}
	}
	if (f == 0) {
		cout << "No \"secret\"" << endl;
	}

	return 0;
}