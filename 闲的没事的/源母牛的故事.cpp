//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int m = 1;//成年母牛
//	int a1, a2, a3;//小牛
//	
//	int year = 2;
//	int arr[60];
//	arr[0] = 0;
//	arr[1] = 1;
//	arr[2] = 2;
//	arr[3] = 3;
//	arr[4] = 4;
//	a1 = 1, a2 = 1, a3 = 1;
//	for (int i = 5; i <= 55; i++) {
//		int temp1 = a1;
//		int temp2 = a2;
//		int temp3 = a3;
//		m += temp3;
//		a1 = m + temp3;
//		a2 = temp1;
//		a3 = temp2;
//		arr[i] = arr[i - 1] + m ;
//	}
//
//	while (1) {
//		int n;
//		cin >> n;
//		if (n == 0)
//			break;
//		cout << arr[n] << endl;
//	}
//
//
//
//
//
//
//	return 0;
//}
///*
//年	成母		a1	a2	a3
//2	1		1
//3	1		1	1
//4	1		1	1	1
//5	2		2	1	1
//6
//7
//8
//9
//10
//
//*/