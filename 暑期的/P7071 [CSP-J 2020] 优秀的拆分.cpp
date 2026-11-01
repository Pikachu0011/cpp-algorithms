#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
void to_2(int num) {
	queue<int> st;
	while (num) {
		st.push(num % 2);
		num /= 2;
	}
	int a = 1;
	vector<int> ans;
	while (!st.empty()) {
		int t = st.front();
		st.pop();
		if (t) {
			ans.push_back(a);
		}
		a *= 2;
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		if (i != ans.size() - 1)cout << " ";
		cout << ans[i];
	}
	cout << endl;
}
void solve() {
	int num;
	cin >> num;
	if (num & 1) {
		cout << -1 << endl;
		return;
	}
	to_2(num);


}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}