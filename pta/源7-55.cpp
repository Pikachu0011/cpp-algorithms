//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//
//	string name[10000];
//	int num[10000];
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> name[i] >> num[i];
//		sum += num[i];
//	}
//	int ave = sum / (2 * n);
//	int minn = 10000;//不能用abs(num[0] - ave)；应该初始化一个较大的值；
//	string win;
//	for (int i = 0; i < n; i++) {
//		if (abs(num[i] - ave) < minn) {
//			minn = abs(num[i] - ave);
//			win = name[i];
//		}
//	}
//	cout << ave << " " << win << endl;
//
//
//
//
//	return 0;
//}