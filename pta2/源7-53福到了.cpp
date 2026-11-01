#include<bits/stdc++.h>
using namespace std;
int main() {
	char c;
	int n;
	cin >> c >> n;
	getchar();
	string s[101];
	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);

	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] == s[n - i - 1][n - j - 1])count++;
		}
	}
	if (count == n * n) {
		cout << "bu yong dao le" << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[n - i - 1][n - j - 1] != ' ') {
				cout << c;
			}
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}