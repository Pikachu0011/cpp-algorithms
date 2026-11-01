//#include<iostream>
//using namespace std;
//
//bool check(int x) {
//	if (x < 2)return false;
//	for (int i = 2; i <= x / i; i++) {
//		if (x % i == 0)return false;
//	}
//	return true;
//}
//int main() {
//	int i = 1;
//	int cnt = 0;
//	while (1) {
//		if (check(i)) {
//			cnt++;
//			//cout << cnt << " " << i << endl;
//		}
//		if (cnt == 2025) {
//			cout << i << endl;
//			break;
//		}
//		i++;
//	}
//
//
//	return 0;
//}