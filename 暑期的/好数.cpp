#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
bool ishao(string s) {
	int cnt = 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		int t = s[i] - '0';
		if (t % 2 == cnt % 2) {

		}
		else return false;
		cnt++;
	}
	return true;
}
void solve() {
	for (int i = 1; i < N; i++) {
		string s = to_string(i);
		if (ishao(s))a[i] = a[i - 1] + 1;
		else a[i] = a[i - 1];
	}
	int n;
	cin >> n;
	cout << a[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}