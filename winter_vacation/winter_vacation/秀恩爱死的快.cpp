//#include<bits/stdc++.h>
//using namespace std;
//const int N = 2000 + 10,ddd = 1000;
//typedef long long ll;
//typedef pair<int, int> pii;
//vector<int> arr[N];
//ll g[N][N];
//set<ll> se;
//ll maxx;
//ll gcd(ll a, ll b) {
//	if (b == 0)return a;
//	return gcd(b, a % b);
//}
//ll lcm(ll a, ll b) {
//	return a / gcd(a, b) * b;
//}
//bool check(int a, int b) {
//	int t1 = min(a, b);
//	int t2 = max(a, b);
//	if (t1 < ddd && t2 > ddd)return true;
//	else return false;
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n;i++) {
//		int x;
//		cin >> x;
//		se.insert(x);
//		while (x--) {
//			int d;
//			cin >> d;
//			if (d < 0)arr[i].push_back(d + ddd);
//			else arr[i].push_back(d);
//		}
//	}
//	maxx = 1;
//	for (int i : se) {
//		maxx = lcm(i,maxx);
//	}
//	//cout << maxx << endl;
//	for (int i = 0; i < n; i++) {
//		auto t = arr[i];
//		ll m = t.size();
//		for (int j = 0; j < m; j++) {
//			for (int k = 0; k < m; k++) {
//				if (t[j] != t[k]) {
//					if (check(t[j], t[k])) {
//						g[t[j]][t[k]] += maxx / m;
//						g[t[k]][t[j]] += maxx / m;
//					}
//				}
//			}
//		}
//	}
//	int A, B;
//	cin >> A >> B;
//	if (A < 0)A += ddd;
//	if (B < 0)B += ddd;
//	vector<int> pa, pb;
//	int maxpa = -1e6, maxpb = -1e6;
//	for (int i = 0; i < n; i++) {
//		if (g[A][i] > maxpa) {
//			maxpa = g[A][i];
//			pa.clear();
//			pa.push_back(i);
//		}
//		else if (g[A][i] == maxpa) {
//			pa.push_back(i);
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (g[B][i] > maxpb) {
//			maxpb = g[B][i];
//			pb.clear();
//			pb.push_back(i);
//		}
//		else if (g[B][i] == maxpb) {
//			pb.push_back(i);
//		}
//	}
//	if (pa[0] == B && pb[0] == A) {
//		if (A > ddd)cout << A - ddd;
//		else cout << A;
//		cout << " ";
//		if (B > ddd)cout << B - ddd;
//		else cout << B;
//		cout << endl;
//	}
//	else {
//		if (A > ddd) {
//			for (int i = 0; i < pa.size(); i++) {
//				cout << A - ddd << " " << pa[i] << endl;
//			}
//		}
//		else {
//			for (int i = 0; i < pa.size(); i++) {
//				cout << A << " " << pa[i] - ddd << endl;
//			}
//		}
//		if (B > ddd) {
//			for (int i = 0; i < pb.size(); i++) {
//				cout << B - ddd << " " << pb[i] << endl;
//			}
//		}
//		else {
//			for (int i = 0; i < pb.size(); i++) {
//				cout << B << " " << pb[i] - ddd << endl;
//			}
//		}
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