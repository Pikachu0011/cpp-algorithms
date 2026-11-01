#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<string> se;
map<string, string> mp;
vector<string> ans;
void solve() {
	int n;
	cin >> n;
	while (n--) {
		string a, b;
		cin >> a >> b;
		mp[a] = b;
		mp[b] = a;
	}
	int m;
	cin >> m;
	vector<string> temp;
	while (m--) {
		string x;
		cin >> x;
		temp.push_back(x);
		se.insert(x);
	}
	for (int i = 0; i < temp.size(); i++) {
		if (se.find(temp[i]) != se.end() && se.find(mp[temp[i]]) != se.end()) {

		}
		else ans.push_back(temp[i]);
	}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++) {
		if (i != 0)cout << " ";
		cout << ans[i];
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