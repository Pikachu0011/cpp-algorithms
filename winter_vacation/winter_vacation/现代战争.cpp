//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//ll arr[N][N];
//bool h[N], l[N];
//set<ll> se;
//struct node {
//	int x, y;
//	ll num;
//};
//vector<node> p;
//bool cmp(node a, node b) {
//	return a.num > b.num;
//}
//void solve() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//			p.push_back({ i,j,arr[i][j] });
//		}
//	sort(p.begin(), p.end(), cmp);
//	for (int i = 0, j = 0; i < k; i++, j++) {
//		int x = p[j].x;
//		int y = p[j].y;
//		if (h[x] || l[y])i--;
//		else {
//			h[x] = 1;
//			l[y] = 1;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (h[i])continue;
//		bool flag = 0;
//		for (int j = 1; j <= m; j++) {
//			if (l[j])continue;
//			if (flag) {
//				cout << " ";
//			}
//			else flag = 1;
//			cout << arr[i][j];
//		}
//		cout << endl;
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