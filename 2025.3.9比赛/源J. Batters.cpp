//#include<bits/stdc++.h>
//using namespace std;
//int arr[4] = { 0 };//0为空，1为有棋子
//
//int p = 0;
//int n;
//int main() {
//	cin >> n;
//	while (n--) {
//		int temp;
//		cin >> temp;
//		arr[0] = 1;
//		int na[4] = { 0 };
//		for (int i = 0; i < 4; i++) {
//			if (arr[i] == 1) {
//				arr[i] = 0;
//				if (i + temp > 3) {
//					p++;
//				}
//				else {
//					na[i + temp] = 1;
//				}
//			}
//		}
//		for (int i = 0; i < 4; i++) {
//			arr[i] = na[i];
//		}
//		
//	}
//	cout << p << endl;
//
//	return 0;
//}
///*
// 0  1  2  3
// */