//95
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
map<vector<int>, int> mp;
int n, m;
struct node {
	int n;
	vector<int> a;
};
bool cmp(node a, node b) {
	if (a.n != b.n)return a.n > b.n;
	for (int i = 0; i < m; i++) {
		if (a.a[i] != b.a[i])return a.a[i] < b.a[i];
	}
}
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		vector<int> temp;
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
		mp[temp]++;
	}
	int k = 0;
	vector<node> arr;
	for (auto t : mp){
		arr.push_back({ t.second,t.first });
	}
	sort(arr.begin(), arr.end(), cmp);
	cout << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].n;
		for (int j = 0; j < arr[i].a.size(); j++) {
			cout << " " << arr[i].a[j];
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