//#include<bits/stdc++.h>
//using namespace std;
//vector<int> r[10010];
//int vis[10010];
//
//int main() {
//	int n, m, a, b;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		r[a].push_back(b);
//		r[b].push_back(a);
//	}
//	int k, np, x, flag;
//	cin >> k;
//	while (k--) {
//		flag = 0;
//		memset(vis, 0, sizeof(vis));
//		cin >> np;
//		while (np--) {
//			cin >> x;
//			vis[x] = 1;
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 0; j < r[i].size(); j++) {
//				if (!vis[i] && !vis[r[i][j]]) {  //´æÔÚ±ß 
//					flag = 1;
//				}
//			}
//		}
//		if (flag) cout << "NO\n";
//		else cout << "YES\n";
//	}
//	return 0;
//}
