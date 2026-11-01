#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int a[N], b[N];
string to_2(int a) {
	stack<int> st;
	while (a) {
		st.push(a % 2);
		a /= 2;
	}
	while(st.size() < 8)st.push(0);
	string ans = "";
	while (!st.empty()) {
		int p = st.top();
		string c = to_string(p);
		ans += c;
	}
	return ans;
}
string init(int a, int b, int c, int d) {
	string ans = "";
	ans = to_2(a) + to_2(b) + to_2(c) + to_2(d);
	return ans;
}
void solve() {
	int a, b, c, d, e;
	scanf("%d.%d.%d.%d/%d", &a, &b, &c, &d, &e);
	string p = init(a, b, c, d);
	int n;
	cin >> n;
	while (n--) {
		int a1, b1, c1, d1;
		scanf("%d.%d.%d.%d", &a1, &b1, &c1, &d1);
		string q = init(a1, b1, c1, d1);
		bool flag = 1;
		for (int i = 0; i < e; i++) {
			if (p[i] != q[i]) {
				flag = 0;
				break;
			}
		}
		if (flag)cout << "YES\n";
		else cout << "NO\n";
	}
}
int main() {
	int t;
	//cin >> t;
	t = 1;
	while(t--)solve();
	return 0;
}
/*
192.168.88.0/24
5
10.1.1.1
10.2.3.4
192.168.88.0
192.168.88.88
182.168.0.0
*/
