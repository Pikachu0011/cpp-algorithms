#include<bits/stdc++.h>
using namespace std;
string s;
int n;
bool check(int l, int r) {
	if (r == -1)return true;
	if (l > n - r)return false;
	for (int i = l, j = r; i < j; i++, j--) {
		if (s[i] != s[j])return false;
	}
	for (int i = l - 1, j = r + 1; i >= 0; i--, j++) {
		if (s[i] != s[j])return false;
	}
	return true;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		
		cin >> s;
		n = s.size();
		int l = n, r = -1;
		for (int i = 0; i < n; i++) {
			if (s[i] != 'l' && s[i] != 'q' && s[i] != 'b') {
				l = min(l, i);
				r = max(r, i);
			}
		}
		if (check(l, r)) {
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;




	}

	return 0;
}