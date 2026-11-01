//#include<bits/stdc++.h>
//using namespace std;
//vector<double> ans;
//bool cmp(int a, int b) {
//	return a > b;
//}
//int main() {
//	int n, k, m;
//	cin >> n >> k >> m;
//	for (int i = 1; i <= n; i++) {
//		vector<double> vv;
//		for (int j = 0; j < k; j++) {
//			double temp;
//			cin >> temp;
//			vv.push_back(temp);
//		}
//		sort(vv.begin(), vv.end());
//		double sum = 0;
//		for (int i = 1; i <= k - 2; i++) {
//			sum += vv[i];
//		}
//		ans.push_back(sum / (k - 2));
//	}
//	sort(ans.begin(), ans.end(), cmp);
//	for (int i = m - 1; i >= 0; i--) {
//		if (i != m - 1)cout << " ";
//		printf("%.3llf", ans[i]);
//	}
//	return 0;
//}