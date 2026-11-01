//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//
//void solve() {
//	string s1, s2;
//	cin >> s1 >> s2;
//	char c;
//	cin >> c;
//	int n1 = 0, n2 = 0;
//	int u = 1;
//	for (int i = s1.size() - 1; i >= 0; i--) {
//		//cout << s1[i] << " ";
//		if (s1[i] == '1') {
//			n1 += u;
//		}
//		u *= 2;
//	}
//	u = 1;
//	for (int i = s2.size() - 1; i >= 0; i--) {
//		if (s2[i] == '1') {
//			n2 += u;
//		}
//		u *= 2;
//	}
//	//cout << n1 << " " << n2 << endl;
//	if (c == '+') {
//		cout << n1 + n2 << endl;
//	}
//	else if (c == '-') {
//		cout << n1 - n2 << endl;
//	}
//	else if (c == '*') {
//		cout << n1 * n2 << endl;
//	}
//	else if (c == '/') {
//		cout << n1 / n2 << endl;
//	}
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	solve();
//
//
//	return 0;
//}