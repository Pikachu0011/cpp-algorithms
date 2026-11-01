//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int maxx;
//int check(int a) {
//	int cnt = 0;
//	while (a >= 10) {
//		string sa = to_string(a);
//		int temp = 1;
//		for (int i = 0; i < sa.size(); i++) {
//			int d = sa[i] - '0';
//			temp *= d;
//		}
//		a = temp;
//		cnt++;
//	}
//	return cnt;
//}
//void solve() {
//	int a, b;
//	cin >> a >> b;
//	vector<int> ans;
//	for (int i = a; i <= b; i++) {
//		int t = check(i);
//		if (t > maxx) {
//			ans.clear();
//			maxx = t;
//			ans.push_back(i);
//		}
//		else if (t == maxx) {
//			ans.push_back(i);
//		}
//	}
//	cout << maxx << endl;
//	for (int i = 0; i < ans.size(); i++) {
//		if (i != 0) {
//			cout << " ";
//		}
//		cout << ans[i];
//	}
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
