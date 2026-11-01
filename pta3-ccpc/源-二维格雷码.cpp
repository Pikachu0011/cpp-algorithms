//#include<bits/stdc++.h>
//using namespace std;
///*
//*    1   1   1   1
// a= 2^3 2^2 2^1 2^0
// b= 
//*/
//bool is_2pow(int num) {
//	while (num!=0 && num!=1) {
//		if (num % 2 == 1) {
//			return 0;
//		}
//		num /= 2;
//		
//	}
//	if (num)return 1;
//	else return 0;
//}
//const int N = 1010;
//int arr[N][N];
//bool vt[70000] = {0};
//int main() {
//	int n;
//	cin >> n;
//	int a = 1 << n;
//	arr[0][0] = 0;
//	vt[0] = 1;
//	//cout << pow(4, 8);//65536
//	for (int i = 1; i < a; i++) {//初始化第一行
//		int j = 1;
//		while (j <= (1 << (2*n))-1) {
//			
//			if (!vt[j] && is_2pow(abs(j - arr[0][i - 1]))) {
//				arr[0][i] = j;
//				//cout << arr[0][i] << " ";
//				vt[j] = 1;
//				break;
//			}
//			j++;
//		}
//	}
//	//cout << endl;
//	for (int i = 1; i < a; i++) {//初始化第一列
//		int j = 1;
//		while (j <= (1 << (2 * n)) - 1) {
//			
//			if (!vt[j] && is_2pow(abs(j - arr[i - 1][0]))) {
//				arr[i][0] = j;
//				//cout << arr[i][0] << " ";
//				vt[j] = 1;
//				break;
//			}
//			j++;
//		}
//	}
//	for (int i = 1; i < a; i++) {
//		for (int j = 1; j < a; j++) {
//			int k = 1;
//			while (k < (1 << (2 * n)) - 1) {
//				if (!vt[k] && is_2pow(abs(k - arr[i][j - 1])) && is_2pow(abs(k - arr[i - 1][j]))) {
//					arr[i][j] = k;
//					vt[k] = 1;
//					break;
//				}
//				k++;
//			}
//		}
//	}
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < a; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}