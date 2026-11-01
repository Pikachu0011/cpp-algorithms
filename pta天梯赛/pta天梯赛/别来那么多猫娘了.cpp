#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
void solve() {
	int n;
	cin >> n;
	vector<string> sss;
	while (n--) {
		string t;
		cin >> t;
		sss.push_back(t);
	}
	int k;
	cin >> k;
	getchar();
	string s;
	getline(cin, s);
	int cnt = 0;
	string huan = "<censored>";
	for (int i = 0; i < sss.size(); i++) {
		string temp = sss[i];
		while (s.find(temp) != string::npos) {
			s.replace(s.find(temp), temp.size(), huan);
			cnt++;
		}
	}
	if (cnt >= k) {
		cout << cnt << endl;
		cout << "He Xie Ni Quan Jia!\n";
	}
	else {
		cout << s << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();



	return 0;
}
