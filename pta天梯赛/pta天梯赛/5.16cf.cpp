#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	int n;
	cin >> n;
	int cnt0 = 0, cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0)cnt0++;
		if (x == 1)cnt1++;
		if (x == 2)cnt2++;
	}
	int ans = cnt0;
	ans += min(cnt1, cnt2);//1 2
	ans += abs(cnt1 - cnt2) / 3;
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	//t = 1;
	while(t--)solve();
	return 0;
}
/*
cnt0
cnt1
cnt2
ans = cnt0;
0
1 2

1 1 1

2 2 2
*/