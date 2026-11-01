//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//vector<int> dist[N];
//void solve() {
//	int n, m;
//	cin >> n >> m;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		dist[a].push_back(b);
//		dist[b].push_back(a);
//	}
//	int cnt = 0;
//	vector<int> pa;
//	for (int i = 1; i <= n; i++) {
//		if (dist[i].size() % 2 == 1) {
//			pa.push_back(i);
//			cnt++;
//		}
//	}
//	cout << cnt / 2 << endl;
//	for (int i = 0; i < pa.size(); i+=2) {
//		cout << pa[i] << " " << pa[i + 1] << endl;
//	}
//}
//int main() {
//	int t;
//	//cin >> t;
//	t = 1;
//	while(t--)solve();
//	return 0;
//}
///*
//6 4
//2 1
//1 3
//5 4
//2 5
//
//
//
//*/
