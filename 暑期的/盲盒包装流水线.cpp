////145
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//map<string, int> mp;
//int n, s;
//void solve() {
//	cin >> n >> s;
//	queue<string> q;
//	for (int i = 1; i <= n; i++) {
//		string ss;
//		cin >> ss;
//		q.push(ss);
//	}
//	for (int i = 1; i <= n / s; i++) {
//		stack<int> st;
//		for (int j = 1; j <= s; j++) {
//			int x;
//			cin >> x;
//			st.push(x);
//		}
//		for (int j = 1; j <= s; j++) {
//			int t = st.top();
//			st.pop();
//			auto temp = q.front();
//			q.pop();
//			mp[temp] = t;
//		}
//	}
//	int k;
//	cin >> k;
//	while (k--) {
//		string s1;
//		cin >> s1;
//		if (mp[s1] != 0) {
//			cout << mp[s1] << endl;
//		}
//		else cout << "Wrong Number\n";
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}