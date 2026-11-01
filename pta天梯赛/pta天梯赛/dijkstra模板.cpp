#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int dist[N];
int vt[N];
int arr[N][N];
int n, m;
int dijkstra() {
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	for (int i = 1; i <= n; i++) {
		int t = -1;
		for (int j = 1; j <= n; j++) {
			if (!vt[j] && (t == -1 || dist[t] > dist[j])) {
				t = j;
			}
		}
		vt[t] = 1;
		for (int j = 1; j <= n; j++) {
			dist[j] = min(dist[j], dist[t] + arr[t][j]);
		}
	}
	if (dist[n] != 0x3f3f3f3f)return dist[n];
	else return -1;
}
void solve() {
	memset(arr, 0x3f, sizeof(arr));
	cin >> n >> m;
	int tn = m;
	while (m--) {
		int a, b, w;
		cin >> a >> b >> w;
		arr[a][b] = min(w, arr[a][b]);
	}
	int t = dijkstra();
	cout << t << endl;

}
int main() {
	solve();
	return 0;
}
