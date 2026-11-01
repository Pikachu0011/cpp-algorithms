//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//
//set<ll> se;
//int fa[N];
//int hobby[N];
//int find_x(int x) {
//	if (fa[x] == x)return x;
//	return fa[x] = find_x(fa[x]);
//}
//void _union(int a, int b) {
//	int root_a = find_x(a);
//	int root_b = find_x(b);
//	if (root_a != root_b) {
//		fa[root_a] = root_b;
//	}
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)fa[i] = i;
//	for (int i = 1; i <= n; i++) {
//		int k;
//		scanf("%d: ", &k);
//		for (int j = 1; j <= k; j++) {
//			int x;
//			cin >> x;
//			if (hobby[x] == 0) {
//				hobby[x] = i;
//			}
//			else {
//				_union(i, hobby[x]);
//			}
//		}
//	}
//	map<int, int> mp;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) {
//		//cout << i << " " << fa[i] << endl;
//		mp[fa[i]]++;
//	}
//	cout << mp.size() << endl;
//	vector<int> arr;
//	for (auto x : mp) {
//		arr.push_back(x.second);
//	}
//	sort(arr.begin(), arr.end());
//	for (int i = arr.size() - 1; i >= 0; i--) {
//		if (i != arr.size() - 1) cout << " ";
//		cout << arr[i];
//	}
//	cout << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//
//	return 0;
//}