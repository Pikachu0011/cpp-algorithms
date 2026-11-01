//#include<bits/stdc++.h>
//using namespace std;
//int pow10(int x) {
//	int res = 1;
//	while (x) {
//		res *= 10;
//		x--;
//	}
//	return res;
//}
//int get_n(vector<int> num, int l, int r) {
//	int res = 0;
//	for (int i = l; i <= r; i++) {
//		res = res * 10 + num[i];
//	}
//	return res;
//}
//int count(int n, int x) {//返回1~n中x的个数
//	vector<int> num;
//	while (n) {
//		num.push_back(n % 10);
//		n /= 10;
//	}
//	reverse(num.begin(), num.end());
//	n = num.size();
//	int res = 0;
//	for (int i = 0 + (x == 0); i <= n - 1; i++) {
//		if (i > 0) {
//			res = res + get_n(num, 0, i - 1) * pow10(n - i - 1);
//			if (x == 0) {
//				res -= pow10(n - i - 1);
//			}
//		}
//		if (num[i] == x) {
//			res = res + get_n(num, i + 1, n - 1) + 1;
//		}
//		if (num[i] > x) {
//			res = res + pow10(n - i - 1);
//		}
//	}
//	return res;
//}
//int main() {
//	int a, b;
//	while (cin >> a >> b, a || b) {
//		if (a > b)swap(a, b);
//		for (int i = 0; i <= 9; i++) {
//			cout << count(b, i) - count(a - 1, i) << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}