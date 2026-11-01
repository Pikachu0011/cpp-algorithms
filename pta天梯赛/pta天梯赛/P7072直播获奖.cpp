#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
#define int long long
typedef pair<int, int> pii;
set<int> se;
int arr[N];
void solve() {
	int n, w;
	cin >> n >> w;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		arr[x]++;
		int k = max((int)1, i * w / 100);
		int ans = 0;
		for (int j = 600; j >= 0; j--) {
			if (ans + arr[j] < k)ans += arr[j];
			else {
				cout << j << " ";
				break;
			}
		}
	}
}
signed main() {
 ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
	int t;
	//cin >> t;
	t = 1;
	while(t--)solve();
	return 0;
}
