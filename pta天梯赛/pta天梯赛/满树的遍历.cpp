//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//vector<int> tree[N];
//bool y = 0;
//void pre(int u) {
//	if (y)cout << " ";
//	else y = 1;
//	cout << u;
//	for (int v : tree[u]) {
//		pre(v);
//	}
//}
//void solve() {
//	int n;
//	cin >> n;
//	int root;
//	for (int i = 1; i <= n; i++) {
//		int f;
//		cin >> f;
//		if (f == 0) {
//			root = i;
//		}
//		else {
//			tree[f].push_back(i);
//		}
//	}
//	int k = 0;
//	bool flag = 1;
//	for (int i = 1; i <= n; i++) {
//		if (tree[i].size() > k) {
//			k = tree[i].size();
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (tree[i].size() != 0 && tree[i].size() != k) {
//			flag = 0;
//		}
//	}
//	cout << k;
//	if (flag)cout << " yes\n";
//	else cout << " no\n";
//	for (int i = 1; i <= n; i++) {
//		if (tree[i].size())sort(tree[i].begin(), tree[i].end());
//	}
//	pre(root);
//
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
