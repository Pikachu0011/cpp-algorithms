//#include<bits/stdc++.h>
//using namespace std;
//const int N = 500 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int clo[N];//ÑÕÉ«
//bool st[N];
//struct edge {
//	int x, y;
//};
//void solve() {
//	vector<edge> arr;
//	int v, e, k;
//	cin >> v >> e >> k;
//	while (e--) {
//		int a, b;
//		cin >> a >> b;
//		arr.push_back({ a,b });
//	}
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		bool flag = 1;
//		set<int> se;
//		for (int j = 1; j <= v; j++) {
//			cin >> clo[j];
//			if (clo[j] < 1 || clo[j] > v) {
//				flag = 0;
//			}
//			se.insert(clo[j]);
//		}
//		if (se.size() != k) {
//			cout << "No\n";
//			continue;
//		}
//		if (!flag) {
//			cout << "No\n";
//			continue;
//		}
//		bool ans = true;
//		for (int i = 0; i < arr.size() ; i++) {
//			auto t = arr[i];
//			int a = t.x, b = t.y;
//			if (clo[a] == clo[b]) {
//				ans = false;
//			}
//		}
//		if (ans)cout << "Yes\n";
//		else cout << "No\n";
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
//	return 0;
//}