//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist[N];
//int vt[N];
//struct node {
//	int num;
//	int index;
//};
//node arr[N][N];
//int n, t;
//void solve() {
//	cin >> n >> t;
//	stack<node> st;
//	int sumzo = 0;
//	bool flag = 0;
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		if (x > t) {
//			st.push({ x,i });
//			sumzo += x;
//		}
//		else {
//			if (flag)cout << " ";
//			else flag = 1;
//			cout << i;
//		}
//	}
//	int ave;
//	if(!st.empty())ave = sumzo / st.size();
//	queue<node> q;
//	while (sumzo != 0) {
//		node t = st.top();
//		if (t.num <= ave) {
//			if (flag)cout << " ";
//			else flag = 1;
//			cout << t.index;
//			sumzo -= t.num;
//		}
//		else {
//			q.push({ t });
//		}
//		st.pop();
//		if (st.empty() && !q.empty()) {
//			while (!q.empty()) {
//				st.push(q.front());
//				q.pop();
//			}
//			if (!st.empty())ave = sumzo / st.size();
//		}
//	}
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
