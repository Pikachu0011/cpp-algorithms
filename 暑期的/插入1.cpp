//#include<bits/stdc++.h>
//using namespace std;
//const int N = 25;
//int T;
//void solve() {
//	cin >> T;
//	while (T--) {
//		string s;
//		cin >> s;
//		if (s[0] == '0')cout << "10" << endl;
//		else if (s[0] == '-') {
//			cout << "-";
//			bool flag = 0;
//			for (int i = 1; i < s.size(); i++) {
//				if (!flag && s[i] > '1') {
//					flag = 1;
//					cout << '1';
//				}
//				cout << s[i];
//				if (i == s.size() - 1 && !flag)cout << '1';
//			}
//			cout << endl;
//		}
//		else {
//			bool flag = 0;
//			for (int i = 0; i < s.size(); i++) {
//				if (!flag && s[i] == '0') {
//					flag = 1;
//					cout << '1';
//				}
//				cout << s[i];
//				if (i == s.size() - 1 && !flag)cout << '1';
//			}
//			cout << endl;
//		}
//	}
//
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	solve();
//
//	return 0;
//}