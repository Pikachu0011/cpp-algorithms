#include<bits/stdc++.h>
using namespace std;
int T;
int main() {
	cin >> T;
	while (T--) {
		string s;
		string ans = "";
		bool flag = 0;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
				if ((s[i] >= 'a' && s[i] <= 'z') && flag) {
					ans += (s[i] - 'a' + 'A');
				}
				else ans += s[i];
			}
			if (s[i] == '<') {
				if (ans.empty())continue;
				else ans.erase(ans.size() - 1, 1);
			}
			if (s[i] == '^')flag = !flag;
			if (s[i] == '@') {
				if (ans.size() < 2)continue;
				char t1 = ans[ans.size() - 1];//ºó
				char t2 = ans[ans.size() - 2];//Ç°
				ans.erase(ans.size() - 2, 2);
				ans += t1;
				ans += t2;
			}
			if (s[i] == '#') {
				if (ans.empty())continue;
				char t = ans[ans.size() - 1];
				ans += t;
			}
			if (s[i] == '!')ans.clear();
		}
		cout << ans << endl;
	}

	return 0;
}