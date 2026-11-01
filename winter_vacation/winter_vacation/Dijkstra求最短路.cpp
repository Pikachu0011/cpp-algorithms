//#include<bits/stdc++.h>
//using namespace std;
//const int N = 500 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int dist[N];
//bool vt[N];
//int arr[N][N];
//set<ll> se;
//int n, m;
//int dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	for (int i = 1; i <= n; i++) {
//		int t = -1;
//		for (int j = 1; j <= n; j++) {
//			if (!vt[j] && (t == -1 || dist[t] > dist[j])) {
//				t = j;
//			}
//		}
//		vt[t] = 1;
//		for (int j = 1; j <= n; j++) {
//			dist[j] = min(dist[j], dist[t] + arr[t][j]);
//		}
//	}
//	if (dist[n] != 0x3f3f3f3f)return dist[n];
//	else return -1;
//}
//void solve() {
//	memset(arr, 0x3f, sizeof(arr));
//	cin >> n >> m;
//	int tn = m;
//	while (tn--) {
//		int a, b, w;
//		cin >> a >> b >> w;
//		//if (a == b)continue;
//		arr[a][b] = min(w, arr[a][b]);
//	}
//	int t = dijkstra();
//	cout << t << endl;
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//
//
//
//	return 0;
//}