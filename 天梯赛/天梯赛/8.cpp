#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
struct node {
	ll num;
	int index;
};
int dist[N];
int vt[N];
node arr[N];
int n;
void solve() {
	cin >> n;
	string s;
	cin >> s;
	while (n--) {
		int op;
		cin >> op;
		if (op == 1) {
			string s1;
			cin >> s1;
			int cnt = 0;
			bool flag = 0;
			vector<int> ind;
			while (s.find(s1) != string::npos) {
				cnt++;
				int index = s.find(s1);
				if (flag)cout << " ";
				else flag = 1;
				cout << index;
				ind.push_back(index);
				s[index] = '*';
				if (cnt >= 3)break;
			}
			for (int i = 0; i < ind.size(); i++) {
				s[ind[i]] = s1[0];
			}
			if (cnt == 0) {
				cout << -1 << endl;
			}
			else cout << endl;
		}
		else if (op == 2) {
			int p;
			string s2;
			cin >> p >> s2;
			s.insert(p, s2);
			cout << s << endl;
		}
		else if (op == 3) {
			int l, r;
			cin >> l >> r;
			//cout << l << " " << r << endl;
			
			if (l == 0 && r == s.size() - 1) {
				string mo = "";
				for (int i = s.size() - 1; i >= 0; i--) {
					//cout << s[i];
					mo += s[i];
				}
				s = mo;
			}
			else if (l != r)reverse(s.begin() + l, s.begin() + l + r - 1);
			cout << s << endl;
		}
		//cout << "moshi : " << s << endl;
	}

}
int main() {
	solve();



	return 0;
}
