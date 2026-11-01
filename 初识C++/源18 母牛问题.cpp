//#include<iostream>
//using namespace std;
//int main() {
//	//a:大母牛
//	//b1：1岁小母牛，b2：2岁小母牛，b3：3岁小母牛
//	int a, b1, b2, b3 ;
//	int year[55];//第i年牛的数量
//
//
//	a = 1;//第一年一头母牛
//
//	year[0] = 0;
//	year[1] = 1;
//	year[2] = 2;
//	year[3] = 3;
//	b1 = 1;
//	b2 = 1;
//	b3 = 0;
//	for (int i = 4; i < 55; i++) {
//		a = a + b3;
//		year[i] = year[i - 1] + a;
//		
//		
//		
//		b3 = b2;
//		b2 = b1;
//		b1 = a;
//
//	}
//	while (1) {
//		int p;
//		cin >> p;
//		if (p != 0)
//			cout << year[p] << endl;
//
//	
//		else 
//			break;
//
//		}
//	return 0; 
//}