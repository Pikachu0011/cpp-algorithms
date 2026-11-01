#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int n;
string s1, s2;
vector<int> arr;
map<int, bool> mp;
void solve() {
	cin >> n;
	while (n--) {
		int op;
		cin >> op;
		if (op == 1) {
			int len;
			cin >> len;
			if (mp[len])cout << "Already Exist\n";
			else {
				mp[len] = 1;
				auto it = lower_bound(arr.begin(), arr.end(), len);
				//int pos = it - arr.begin();
				arr.insert(it, len);
			}
		}
		else if (op == 2) {
			int len;
			cin >> len;
			if (arr.empty()) {
				cout << "Empty\n";
				continue;
			}
			
			auto it = lower_bound(arr.begin(), arr.end(), len);
			int pos = it - arr.begin();
			if (pos < arr.size() && arr[pos] == len) {
				cout << len << endl;
				arr.erase(arr.begin() + pos);
				mp[len] = 0;
				continue;
			}
			int qian = -1, now = -1;
			if (pos > 0) qian = arr[pos - 1];
			if (pos < arr.size()) now = arr[pos];
			int cho;
			if (qian == -1)cho = now;
			else if (now == -1)cho = qian;
			else {
				if (abs(qian - len) < abs(now - len)) cho = qian;
				else if (abs(qian - len) > abs(now - len))cho = now;
				else cho = min(qian, now);
			}
			cout << cho << endl;
			auto del = lower_bound(arr.begin(), arr.end(), cho);
			arr.erase(del);
			mp[cho] = 0;

		}
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