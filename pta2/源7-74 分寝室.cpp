//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//	int n0, n1, n;//女生 男生 寝室数
//	cin >> n0 >> n1 >> n;
//	int i, j;
//	int mi,mj;
//	bool flag = 0;
//	int cha = 9999;
//	if (n0 == 0 && n1 != 0) {
//		if (n1 % n == 0)cout << 0 << n;
//		else cout << "No Solution";
//		return 0;
//	}
//	if (n0 != 0 && n1 == 0) {
//		if (n0 % n == 0)cout << n << 0;
//		else cout << "No Solution";
//		return 0;
//	}
//	if (n0 == 0 && n1 == 0) {
//		cout << "No Solution";
//		return 0;
//	}
//	for (i = 2;i <= n0; i++) {//女寝人数
//		//男寝人数 n1/(n-n0/i)
//		if (i!=0 && n0 % i == 0 && (n - n0 / i) > 0 && n1 % (n - n0 / i) == 0) {
//			j = n1 / (n - n0 / i);
//			//cout << i << j << endl;
//			flag = 1;
//			if (abs(i - j) < cha) {
//				mi = i;
//				mj = j;
//			}
//		}
//	}
//	if (flag)cout << n0 / mi << " " << n1 / mj;
//	else cout << "No Solution";
//	return 0;
//}