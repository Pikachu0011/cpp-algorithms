#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
map<string, vector<string>>mp;//Í·×ÖÄ¸´®  ...
void solve() {
	int n;
	cin >> n;
	cin.ignore();
	//getchar();
	while (n--) {
		string x;
		getline(cin, x);
		stringstream ss(x);
		string temp;
		string key = "";
		while (ss >> temp) {
			key += temp[0];
		}
		mp[key].push_back(x);
	}
	int m;
	cin >> m;
	cin.ignore();
	//getchar();
	while (m--) {
		string x;
		getline(cin, x);
		stringstream ss(x);
		string temp;
		string key = "";
		while (ss >> temp) {
			key += temp[0];
		}
		auto it = mp.find(key);
		if (it == mp.end()) {
			cout << endl;
			continue;
		}
		vector<string> tem = it->second;
		sort(tem.begin(), tem.end());
		for (int i = 0; i < tem.size(); i++) {
			if (i != 0)cout << "|";
			cout << tem[i];
		}
		cout << endl;
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