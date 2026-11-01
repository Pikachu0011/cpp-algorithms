////181
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//map<int, int> mp;
//set<int> se;
//stack<char> st;
//void solve() {
//	string s;
//	cin >> s;
//	string ans = "";
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == ')') {
//
//			while (st.top() != '(') {
//				ans += st.top();
//				st.pop();
//			}
//			st.pop();
//			string ans1 = "";
//			for (int i = ans.size() - 1; i >= 0; i--) {
//				ans1 += ans[i];
//			}
//			cout << ans1 << endl;
//			ans.clear();
//			ans1.clear();
//		}
//		else st.push(s[i]);
//	}
//}
//int main() {
//	int t;
//	//cin>>t;
//	solve();
//	return 0;
//}