//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist[N];
//int vt[N];
//map<pii, int>mp;
//struct node {
//	pii bian;
//	int w;
//};
//int n, m;
//bool cmp(node a, node b) {
//	return a.w < b.w;
//}
//void solve() {
//	int n;
//	cin >> n;
//	int minn = 1e6;
//	vector<node> dis;
//	for (int i = 1; i < n; i++) {
//		int x, w;
//		cin >> x >> w;
//		//minn = min(minn, w);
//		pii b = { x,i };
//		dis.push_back({ b, w });
//	}
//	//cout << minn << endl;
//	sort(dis.begin(), dis.end(), cmp);
//	// for (int i = 0; i < dis.size(); i++) {
//	// 	cout << dis[i].bian.first << " " << dis[i].bian.second << " " << dis[i].w << endl;
//	// }
//	//cout << dis[1]. << endl;
//	int ans = 5;
//	cout << dis[ans].w << endl;
//	cout << dis[ans].bian.first << " " << dis[ans].bian.second << endl;
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
