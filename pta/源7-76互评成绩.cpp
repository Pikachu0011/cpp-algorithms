#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
vector<double> ans;
vector<double> temp;
int main() {
	int n, k, m;
	cin >> n >> k >> m;
	while (n--) {
		for (int i = 0; i < k; i++) {
			double t;
			cin >> t;
			temp.push_back(t);
		}
		sort(temp.begin(), temp.end());
		double ave, sum = 0;
		auto p = temp.begin() + 1;
		auto q = temp.end() - 1;
		for (; p != q; p++) {
			sum += *p;
		}
		ave = sum / (k - 2);
		ans.push_back(ave);
		temp.clear();
	}
	sort(ans.begin(), ans.end());
	for (int i=0; i < m; i++) {
		if (i != 0)
			cout << " ";
		printf("%.3lf", ans[ans.size()-m+i]);

	}
	return 0;
}