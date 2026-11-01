////147
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int n, d;
//vector<pii> node;
//map<pii, bool> mp;
//set<ll> se;
//double dist(pii a, pii b) {//æ‡¿Î
//	return sqrt(pow(a.first - b.first, 2) + pow(b.second - b.second, 2));
//}
//bool check(pii p) {
//	int x = p.first, y = p.second;
//	if (100 - x <= d || 100 - y <= d || x <= d || y <= d)return true;
//	else return false;
//}
//void solve() {
//	cin >> n >> d;
//	while (n--) {
//		int x, y;
//		cin >> x >> y;
//		node.push_back({ x + 50,y + 50 });
//	}
//	if (15 + d >= 50) {
//		cout << "Yes\n";
//		return;
//	}
//	pii x = { 50,50 };
//	queue<pii> q;
//	for (int i = 0; i < node.size(); i++) {
//		if (dist(x, node[i]) <= (double)15 + d) {
//			mp[node[i]] = 1;
//			q.push(node[i]);
//		}
//	}
//	bool flag = 0;
//	while (!q.empty()) {
//		auto t = q.front();
//		if (check(t)) {
//			flag = 1;
//			break;
//		}
//		q.pop();
//		for (int i = 0; i < node.size(); i++) {
//			if (!mp[node[i]] && dist(t, node[i]) <= (double)d) {
//				mp[node[i]] = 1;
//				q.push(node[i]);
//			}
//		}
//	}
//	if (flag)cout << "Yes\n";
//	else cout << "No\n";
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