//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e4 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//vector<int> a[N];
//set<ll> se;
//bool st[N];
//int mlen;
//vector<int> temp;
//vector<int> ans;
//void dfs(int x,int len) {
//	if (len > mlen) {
//		mlen = len;
//		ans = temp;
//	}
//	for (int i = 0; i < a[x].size(); i++) {
//		temp.push_back(a[x][i]);
//		dfs(a[x][i], len + 1);
//		temp.pop_back();
//	}
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int k;
//		cin >> k;
//		while (k--) {
//			int x;
//			cin >> x;
//			a[i].push_back(x);
//			st[x] = 1;
//		}
//		sort(a[i].begin(), a[i].end());
//	}
//	int s;
//	for (int i = 0; i < n; i++) {
//		if (st[i] == 0) {
//			temp.push_back(i);
//			s = i;
//			break;
//		}
//	}
//	dfs(s, 1);
//	cout << mlen << endl;
//	for (int i = 0; i < ans.size(); i++) {
//		if (i != 0)cout << " ";
//		cout << ans[i];
//	}
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