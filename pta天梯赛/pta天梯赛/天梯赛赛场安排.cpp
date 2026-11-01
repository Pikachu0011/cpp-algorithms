#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
struct node {
	string name;
	int num;//学生人数
};
map<string, int> mp;//学校 教考人数
vector<string> arr;
vector<int> chang;
struct cmp {
	bool operator()(node a, node b) {
		return a.num < b.num;
	}
};
void solve() {
	int n, c;
	cin >> n >> c;
	priority_queue<node, vector<node>, cmp> pq;
	for (int i = 1; i <= n; i++) {
		string na;
		int num;
		cin >> na >> num;
		arr.push_back(na);
		pq.push({ na,num });
	}
	while (!pq.empty()) {
		auto t = pq.top();
		pq.pop();
		if (t.num > c) {
			mp[t.name]++;
			t.num -= c;
			chang.push_back(c);
			pq.push(t);
		}
		else if (t.num == c) {
			mp[t.name]++;
			chang.push_back(c);
		}
		else {
			bool flag = 0;
			for (int i = 0; i < chang.size(); i++) {
				if (chang[i] + t.num <= c) {
					chang[i] += t.num;
					mp[t.name]++;
					flag = 1;
					break;
				}
			}
			if (!flag) {
				chang.push_back(t.num);
				mp[t.name]++;
			}
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " " << mp[arr[i]] << endl;
	}
	cout << chang.size() << endl;
}
int main() {
	solve();



	return 0;
}
