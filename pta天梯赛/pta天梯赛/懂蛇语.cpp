//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//vector<string>zidian[N];
//map<string, int> mp;
//void solve() {
//	int n;
//	cin >> n;
//	getchar();
//	int cnt = 0;
//	while (n--) {
//		string s;
//		getline(cin, s);
//		stringstream ss(s);
//		string temp;
//		string tou = "";
//		while (ss >> temp) {
//			tou += temp[0];
//		}
//		if (mp[tou] != 0) {
//			zidian[mp[tou]].push_back(s);
//		}
//		else {
//			cnt++;
//			mp[tou] = cnt;
//			zidian[cnt].push_back(s);
//		}
//	}
//	int q;
//	cin >> q;
//	getchar();
//	while (q--) {
//		string f;
//		getline(cin, f);
//		stringstream ss(f);
//		string temp;
//		string tou = "";
//		while (ss >> temp) {
//			tou += temp[0];
//		}
//		if (mp[tou] == 0) {
//			cout << f << endl;
//		}
//		else {
//			int index = mp[tou];
//			for (int i = 0; i < zidian[index].size(); i++) {
//				if (i != 0)cout << '|';
//				cout << zidian[index][i];
//			}
//			cout << endl;
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
