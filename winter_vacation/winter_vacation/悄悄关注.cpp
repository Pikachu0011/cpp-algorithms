#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
struct node {
	string name;
	int num;
};
set<string> se;
vector<node> arr;
bool cmp(node a, node b) {
	return a.name < b.name;
}
void solve() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		se.insert(s);
	}
	int m;
	cin >> m;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		string n;
		int num;
		cin >> n >> num;
		sum += num;
		arr.push_back({ n,num });
	}
	double avg = (double)sum / (1.0 * m);
	sort(arr.begin(), arr.end(), cmp);
	bool flag = 0;
	for (int i = 0; i < m; i++) {
		if ((double)arr[i].num > avg && se.find(arr[i].name) == se.end()) {
			flag = 1;
			cout << arr[i].name << endl;
		}
	}
	if (!flag) cout << "Bing Mei You\n";
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