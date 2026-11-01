//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//int flag;
//bool is_hao(int num) {
//	
//	while (num != 0) {
//		if (num % 2 != flag) {
//			return 0;
//		}
//		if (flag == 1)flag = 0;
//		else flag = 1;
//		//cout << num << endl;
//		num /= 10;
//	}
//	return 1;
//}
//LL n;
//int main() {
//	cin >> n;
//	LL cnt = 0;
//	
//	for (LL i = 1; i <= n; i++) {
//		flag = 1;
//		if (is_hao(i)) {
//			cnt++;
//			//cout << i << endl;
//		}
//	}
//	cout << cnt;
//
//	return 0;
//}