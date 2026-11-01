#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
void solve() {
	cin >> s1 >> s2;
	int preflag, flag;
	if (s1[0] == s2[0] && s1[0] == '.')preflag = 0;
	else if (s1[0] == s2[0] && s1[0] == '#')preflag = 3;
	else if (s1[0] != s2[0] && s1[0] == '#')preflag = 1;
	else if (s1[0] != s2[0] && s1[0] == '.')preflag = 2;
	int chu = -1;
	int i, j, pre;
	int ans = 0;
	for (int j = 0; j < s1.size(); j++) {
		if (s1[j] == s2[j] && s1[j] == '.') {
			continue;
		}
		else {
			chu = pre = j;
			if (s1[j] == s2[j] && s1[j] == '.')preflag = 0;
			else if (s1[j] == s2[j] && s1[j] == '#')preflag = 3;
			else if (s1[j] != s2[j] && s1[j] == '#')preflag = 1;
			else if (s1[j] != s2[j] && s1[j] == '.')preflag = 2;
			break;
		}
	}
	//ÅÐ¶Ïchu£¡= -1
	for (int k = chu + 1; k < s1.size(); k++) {
		if (s1[k] == s2[k] && s1[k] == '.') {
			continue;
		}
		if (s1[k] == '#' || s2[k] == '#') {
			j = k;
			if (s1[j] == s2[j] && s1[j] == '.')flag = 0;
			else if (s1[j] == s2[j] && s1[j] == '#')flag = 3;
			else if (s1[j] != s2[j] && s1[j] == '#')flag = 1;
			else if (s1[j] != s2[j] && s1[j] == '.')flag = 2;
		}
		//cout << pre << " " << j << " " << preflag << " " << flag << endl;

		if (preflag == flag)ans += (j - pre - 1);
		else if (preflag == 3 || flag == 3)ans += (j - pre - 1);
		else ans += (j - pre);
		if ((preflag == 1 && flag == 2) || (preflag == 2 && flag == 1)) {
			//cout << 1 << "---------" << endl;
			preflag = 3;
		}
		else {
			//cout << 2 << "-----------" << endl;
			preflag = flag;
		}
		//cout << ans << endl;
		k = j;
		pre = j;
	}
	cout << ans << endl;
}
/*
.#.#.#.#....#...
................
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}