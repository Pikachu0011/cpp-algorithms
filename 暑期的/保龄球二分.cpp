#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
struct node {
	int num;
	int index;
};

node a[N];
bool cmp(node a, node b) {
	return a.num < b.num;
}
//ะก -->  ด๓
set<ll> se;
int n, m;
int x;
//bool check(int mid) {
//	return a[mid].num >= x;
//}
string s1, s2;
void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].num;
		a[i].index = i;
	}
	sort(a, a + n, cmp);
	cin >> m;
	while (m--) {
		cin >> x;
		int l = -1, r = n;
		while (l + 1 != r) {
			int mid = (l + r) / 2;
			if (a[mid].num >= x)r = mid;
			else l = mid;
		}
		if (r == n || a[r].num != x)cout << 0 << endl;
		else cout << a[r].index + 1 << endl;
	}
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