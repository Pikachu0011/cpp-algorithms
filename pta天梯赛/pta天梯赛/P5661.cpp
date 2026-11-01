#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;
struct node {
	bool ji;
	int price;
	int stime;
};
vector<node> nodes;
struct juan {
	int st;
	int price;
	bool used;
};
juan arr[N];
int h, t;
bool cmp(node a, node b) {
	return a.stime < b.stime;
}
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		node x;
		cin >> x.ji >> x.price >> x.stime;
		nodes.push_back(x);
	}
	sort(nodes.begin(), nodes.end(), cmp);
	int ans = 0;
	for (int i = 0; i < nodes.size(); i++) {
		auto te = nodes[i];
		if (te.ji == 0) {
			ans += te.price;
			arr[t].st = te.stime + 45;
			arr[t++].price = te.price;
		}
		else {
			while (h < t && arr[h].st < te.stime)h++;//去掉过期的卷
			bool found = false;
			for (int j = h; j < t; j++) {
				if (arr[j].price >= te.price && arr[j].used == 0) {
					found = true;
					arr[j].used = 1;
					break;
				}
			}
			if (!found)ans += te.price;
		}

	}
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}