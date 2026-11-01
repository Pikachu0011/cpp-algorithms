////148
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10, INF = 0x3f3f3f3f;
//typedef long long ll;
//typedef pair<int, int> pii;
//int n, m, s, d;
//int mp1[N][N], mp2[N][N];//mp1´æ´¢³¤¶È£¬mp2´æ´¢money
//int lowdis[N], lowmoney[N];
//bool vis[N];
//set<ll> se;
//
//void dijkstra() {
//	vis[s] = true;
//	for (int i = 0; i < n; i++) {
//		lowdis[i] = mp1[s][i];
//		lowmoney[i] = mp2[s][i];
//	}
//	for (int i = 0; i < n - 1; i++) {
//		int min_n = INF, q = -1;
//		for (int j = 0; j < n; j++) {
//			if (!vis[j] && (q == -1 || lowdis[j] < min_n)) {
//				min_n = lowdis[j];
//				q = j;
//			}
//		}
//		vis[q] = 1;
//		for (int j = 0; j < n; j++) {
//			if (lowdis[j] > lowdis[q] + mp1[q][j]) {
//				lowdis[j] = lowdis[q] + mp1[q][j];
//				lowmoney[j] = lowmoney[q] + mp2[q][j];
//			}
//			else if (lowdis[j] == lowdis[q] + mp1[q][j]) {
//				if (lowmoney[j] > lowmoney[q] + mp2[q][j]) {
//					lowmoney[j] = lowmoney[q] + mp2[q][j];
//				}
//			}
//		}
//	}
//}
//void solve() {
//	cin >> n >> m >> s >> d;
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < n; j++) {
//			if (i == j) mp1[i][j] = mp2[i][j] = 0;
//			else mp1[i][j] = mp2[i][j] = INF;
//		}
//	while (m--) {
//		int a, b, c, f;
//		cin >> a >> b >> c >> f;
//		mp1[a][b] = mp1[b][a] = c;
//		mp2[a][b] = mp2[b][a] = f;
//	}
//	dijkstra();
//	cout << lowdis[d] << " " << lowmoney[d] << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}