#include<bits/stdc++.h>
using namespace std;
map<string, string> mp;
int n, m;

int main() {
	cin >> n >> m;
	while (n--) {
		string a, b;
		cin >> a >> b;
		mp[a] = b;
	}
	while (m--) {
		string c;
		cin >> c;
		if (mp.count(c))cout << mp[c] <<"\n";
		else cout << "NULL" <<"\n";
	}


	return 0;
}