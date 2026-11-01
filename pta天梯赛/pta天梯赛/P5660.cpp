#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int a[N], b[N];
void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)if (s[i] == '1')cnt++;
	cout << cnt << endl;
}
int main() {
	int t;
	//cin >> t;
	t = 1;
	while(t--)solve();
	return 0;
}
