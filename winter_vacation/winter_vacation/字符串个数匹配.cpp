//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//
//set<ll> se;
//void solve() {
//	string s, s1;
//	getline(cin, s);
//	cin >> s1;
//	int ans = 0;
//	string s2 = "";
//	for (int i = 0; i <= s.size(); i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z')s[i] = s[i] - 'A' + 'a';
//		if (s[i] >= 'a' && s[i] <= 'z') {
//			s2 += s[i];
//		}
//		else {
//			s2 += ' ';
//		}
//	}
//	for (int i = 0; i <= s1.size(); i++) {
//		if (s1[i] >= 'A' && s1[i] <= 'Z') {
//			s1[i] = s1[i] - 'A' + 'a';
//
//		}
//	}
//		stringstream ss1(s2);
//		string temp;
//		while (ss1 >> temp) {
//			if (temp.find(s1) != string::npos) {
//				ans++;
//			}
//		}
//		cout << ans << endl;
//}
//int main() {
//		ios::sync_with_stdio(false);
//		cin.tie(0);
//		cout.tie(0);
//		int t = 1;
//		while (t--)solve();
//
//
//		return 0;
//}