//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1000 + 10;
//typedef long long ll;
//#define int long long
//typedef pair<int, int> pii;
//int a[N], v[N];
//set<ll> se;
//int n, A, B;
//string s1, s2;
//bool check(int x) {
//	return x >= 1 && x <= n;
//}
//void solve() {
//	cin >> n >> A >> B;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	queue<int> q;
//	q.emplace(A);
//	v[A] = 1;
//	int cnt = 0, flag = 0;
//	while (!q.empty()) {
//		int num = q.size();
//		for (int i = 1; i <= num; i++) {
//			if (q.front() == B) {
//				cout << cnt << endl;
//				return;
//			}
//			int q1 = q.front() + a[q.front()];
//			if (check(q1) && !v[q1]) {
//				v[q1] = 1;
//				q.emplace(q1);
//			}
//			q1 = q.front() - a[q.front()];
//			if (check(q1) && !v[q1]) {
//				v[q1] = 1;
//				q.emplace(q1);
//			}
//			q.pop();
//		}
//		cnt++;
//	}
//	cout << "-1" << endl;
//}
//
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}