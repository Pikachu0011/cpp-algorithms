#include<bits/stdc++.h>

using namespace std;

int main() {
	cin.tie();
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int a = 0, b = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(')a++;
			else a--;
			if (a == 0)b++;
		}
		
		
		if (b>=2)cout << "YES\n";
		else cout << "NO\n";
	}
	

	return 0;
}
/*(()(()))*/