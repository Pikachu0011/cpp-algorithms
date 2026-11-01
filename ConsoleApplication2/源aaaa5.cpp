#include<bits/stdc++.h>
using namespace std;
int main() {
	string ss;
	cin >> ss;
	int n;
	cin >> n;
	while (n--) {
		int a1, a2;

		string s1, s2;

		cin >> a1 >> a2 >> s1 >> s2;
		string s3 = s1 + s2;
		string s4;
		for (int i = a1 - 1; i <= a2 - 1; i++) {
			s4 += ss[i];
		}
		ss.erase(a1 - 1, s4.size());
		if (ss.find(s3) != string::npos) {
			ss.insert(ss.find(s3) + s1.length(), s4);
		}
		else {
			ss += s4;
		}
	}
	cout << ss << endl;


	return 0;
}