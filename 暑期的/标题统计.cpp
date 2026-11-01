#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<char> se;
int n;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cout <<(char)((s[i] - 'a' + n) % 26 + 'a');
	}

}

int main() {
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}