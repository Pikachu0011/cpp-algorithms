//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n;
//map<string, int>mp;//name score;
//
//void solve() {
//	cin >> n;
//	int cnt = 0;
//	while (n--) {
//		int op;
//		cin >> op;
//		if (op == 1) {
//			string t;
//			int sc;
//			cin >> t >> sc;
//			if (mp[t] == 0)cnt++;
//			mp[t] = sc;
//			cout << "OK\n";
//		}
//		else if (op == 2) {
//			string t;
//			cin >> t;
//			if (mp[t] != 0)cout << mp[t] << endl;
//			else cout << "Not found\n";
//		}
//		else if (op == 3) {
//			string t;
//			cin >> t;
//			if (mp[t] == 0) {
//				cout << "Not found\n";
//			}
//			else {
//				mp[t] = 0;
//				cnt--;
//				cout << "Deleted successfully\n";
//			}
//		}
//		else if (op == 4) {
//			cout << cnt << endl;
//		}
//	}
//
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