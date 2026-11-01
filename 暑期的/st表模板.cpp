//#include<bits/stdc++.h>
//using namespace std;
//
//vector<vector<int>>dp;//dp[i][j] 左端点为i，长度为 2^j 这样的区间 即 [i,i + 2 ^ j - 1];
//int query(int l, int r) {
//	int j = (int)log2(r - l + 1);
//	return max(dp[l][j], dp[r - (1 << j) + 1][j]);
//}
///*
//* 最小值（Min）
//vector<vector<int>> dp;
//
//int query_min(int l, int r) {
//	int j = (int)log2(r - l + 1);
//	return min(dp[l][j], dp[r - (1 << j) + 1][j]);
//}
//
//void build_min(vector<int>& arr) {
//	int n = arr.size();
//	dp.assign(n, vector<int>((int)log2(n) + 5, 0));
//	for (int i = 0; i < n; i++) dp[i][0] = arr[i];
//	for (int j = 1; j <= log2(n); j++) {
//		for (int i = 0; i + (1 << j) - 1 < n; i++) {
//			dp[i][j] = min(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
//		}
//	}
//}
//*/
//
///*最大公约数（GCD）—— 需要 C++17 或包含 <numeric>
//#include <numeric>  // std::gcd 在这个头文件里，bits 里也有
//vector<vector<int>> dp;
//
//int query_gcd(int l, int r) {
//	int j = (int)log2(r - l + 1);
//	return gcd(dp[l][j], dp[r - (1 << j) + 1][j]); // std::gcd
//}
//
//void build_gcd(vector<int>& arr) {
//	int n = arr.size();
//	dp.assign(n, vector<int>((int)log2(n) + 5, 0));
//	for (int i = 0; i < n; i++) dp[i][0] = arr[i];
//	for (int j = 1; j <= log2(n); j++) {
//		for (int i = 0; i + (1 << j) - 1 < n; i++) {
//			dp[i][j] = gcd(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
//		}
//	}
//}
//*/
///*
//* 按位与（AND）
//vector<vector<int>> dp;
//
//int query_and(int l, int r) {
//	int j = (int)log2(r - l + 1);
//	return dp[l][j] & dp[r - (1 << j) + 1][j];
//}
//
//void build_and(vector<int>& arr) {
//	int n = arr.size();
//	dp.assign(n, vector<int>((int)log2(n) + 5, 0));
//	for (int i = 0; i < n; i++) dp[i][0] = arr[i];
//	for (int j = 1; j <= log2(n); j++) {
//		for (int i = 0; i + (1 << j) - 1 < n; i++) {
//			dp[i][j] = dp[i][j - 1] & dp[i + (1 << (j - 1))][j - 1];
//		}
//	}
//}
//*/
///*
// 按位或（OR）
// vector<vector<int>> dp;
//
//int query_or(int l, int r) {
//	int j = (int)log2(r - l + 1);
//	return dp[l][j] | dp[r - (1 << j) + 1][j];
//}
//
//void build_or(vector<int>& arr) {
//	int n = arr.size();
//	dp.assign(n, vector<int>((int)log2(n) + 5, 0));
//	for (int i = 0; i < n; i++) dp[i][0] = arr[i];
//	for (int j = 1; j <= log2(n); j++) {
//		for (int i = 0; i + (1 << j) - 1 < n; i++) {
//			dp[i][j] = dp[i][j - 1] | dp[i + (1 << (j - 1))][j - 1];
//		}
//	}
//}
//*/
///*
//使用方式
//int main() {
//	vector<int> arr = {9, 3, 1, 7, 5, 6, 0, 8};
//	build_max(arr);  // 选你要用的 build
//
//	int l, r;
//	while (cin >> l >> r) {
//		cout << query_max(l, r) << endl;
//	}
//	return 0;
//}
//*/
//int main() {
//	vector<int> arr = { 9,3,1,7,5,6,0,8 };
//	const int n = 8;
//	dp = vector<vector<int>>(n, vector<int>((int)log2(n) + 5, 0));
//	for (int i = 0; i < n; i++)dp[i][0] = arr[i];
//	for (int j = 1; j <= log2(n); j++) {
//		for (int i = 0; i + (1 << j) - 1 < n; i++) {
//			dp[i][j] = max(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
//		}
//	}
//	int l, r;
//	while (cin >> l >> r) {
//		cout << query(l, r) << endl;
//	}
//	return 0;
//}