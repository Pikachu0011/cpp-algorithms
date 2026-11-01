//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10, INF = 1e6;
//typedef long long ll;
//typedef pair<int, int> pii;
//vector<int> arr[N];
//bool vt[N];
//int dist[N];
//set<ll> se;
//int ans;
//int mdep;
//void dfs(int x, int dep) {
//	dist[x] = min(dist[x], dep);
//	for (int i = 0; i < arr[x].size(); i++) {
//		if (!vt[arr[x][i]]) {
//			vt[arr[x][i]] = 1;
//			dfs(arr[x][i], dep + 1);
//			vt[arr[x][i]] = 0;
//		}
//	}
//}
//void solve() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		arr[a].push_back(b);
//		arr[b].push_back(a);
//	}
//	while (k--) {
//		int x;
//		cin >> x;
//		ans = 1e6;
//		memset(vt, 0, sizeof(vt));
//		mdep = 0;
//		// memset(dist,INF,sizeof(dist));
//		for (int i = 1; i <= n; i++)dist[i] = INF;
//		vt[x] = 1;
//		dfs(x, 0);
//		for (int i = 1; i <= n; i++) {
//			//cout<<dist[i]<<" ";
//			if (dist[i] > mdep && dist[i] != INF) {
//				mdep = dist[i];
//				ans = i;
//			}
//			else if (dist[i] == mdep && dist[i] != INF) {
//				ans = min(ans, i);
//			}
//		}
//		//cout<<endl;
//		if (ans != x)cout << ans << endl;
//		else cout << 0 << endl;
//	}
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