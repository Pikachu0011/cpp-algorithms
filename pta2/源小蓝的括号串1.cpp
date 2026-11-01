#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main() {
	int n;
	cin >> n;
	getchar();
	string s;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		if (s[i] == ')') {
			if (!st.empty() && st.top() == '(') {
				st.pop();

			}
			else {
				cout << "No" << endl;
				return 0;
			}
		}
		else {
			st.push(s[i]);
		}
	}
	if (st.empty()) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}