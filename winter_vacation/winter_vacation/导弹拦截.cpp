//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int n;
//int arr[N];
//void solve() {
//	int i = 0;
//	while (scanf("%d", &arr[i]) != EOF) {
//		i++;
//	}
//
//	int n = i;
//	vector<int> dp(n, 1);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			if (arr[i] <= arr[j]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	int res = 0;
//	for (int i = 0; i < n; i++)res = max(res, dp[i]);
//	cout << res << endl;
//	vector<int> num;
//	num.push_back(arr[0]);
//	for (int i = 0; i < n; i++) {
//
//		bool flag = 0;
//		for (int j = 0; j < num.size(); j++) {
//			if (arr[i] <= num[j]) {
//				num[j] = arr[i];
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)num.push_back(arr[i]);
//
//	}
//	cout << num.size() << endl;
//}
//int main() {
//	solve();
//
//	return 0;
//}
