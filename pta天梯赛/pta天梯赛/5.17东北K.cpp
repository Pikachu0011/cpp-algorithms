#include<bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int arr[N][N];
int n, m;
int dist[N];//i 颜色，最大的前缀个数
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int j = 1; j <= m; j++) {
		int top = arr[1][j];
		int len = 1;
		for (int i = 2; i <= n; i++) {
			if (arr[i][j] == top)len++;
			else break;
		}
		dist[top] = max(dist[top], len);
	}
	ll sum = 0;
	for (int i = 1; i <= m; i++)sum += dist[i];
	cout << (ll)n * m - sum << endl;

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	//cin >> t;
	t = 1;
	while(t--)solve();
	return 0;
}
