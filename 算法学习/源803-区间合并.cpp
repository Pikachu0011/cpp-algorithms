//按左端点从小到大排序，再处理右端点
#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> PII;
vector<PII> t;
int n;
int merge(vector<PII>& t) {
	vector<PII> res;
	int st = -2e9, ed = -2e9;
	for (auto i : t) {
		if (ed < i.first) {
			
			res.push_back({ st,ed });
			st = i.first, ed = i.second;
			//cout << st << " " << ed << endl;;
		}
		else {
			
			ed = max(ed, i.second);
			//cout << st << " " << ed << endl;
		}

	}
	/*for (auto i : res) {
		cout << i.first << " " << i.second << endl;
	}*/
	return res.size();
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int l, r;
		cin >> l >> r;
		t.push_back({ l,r });

	}
	sort(t.begin(), t.end());
	cout << merge(t) << endl;
	
	return 0;
}