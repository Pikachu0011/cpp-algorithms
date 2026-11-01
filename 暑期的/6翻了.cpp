//#include<bits/stdc++.h>
//using namespace std;
//const int N = 10010;
//string s;
//
//void solve() {
//	getline(cin, s);
//	string out = "";
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '6') {
//			cnt++;
//		}
//		else if (cnt != 0) {
//
//			if (cnt <= 3) {
//				for (int k = 1; k <= cnt; k++)out += '6';
//			}
//			else if (cnt > 3 && cnt <= 9)out += '9';
//			else out += '27';
//			cnt = 0;
//			out += s[i];
//		}
//		else {
//			out += s[i];
//		}
//
//	}
//	if (cnt <= 3) {
//		for (int k = 1; k <= cnt; k++)out += '6';
//	}
//	else if (cnt > 3 && cnt <= 9)out += '9';
//	else out += "27";
//	cout << out << endl;
//
//}
//signed main() {
//	solve();
//
//	return 0;
//}