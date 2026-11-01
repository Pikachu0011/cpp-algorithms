//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//int main() {
//	int n;
//	cin >> n;
//	int i = 1;
//	while (1) {
//		LL sum1 = 0;
//		LL sum2 = 0;
//		for (int j = i; j <= i + n; j++) {
//			sum1 += j * j;
//		}
//		for (int j = i + n + 1; j <= i + n + n; j++) {
//			sum2 += j * j;
//		}
//		if (sum1 == sum2) {
//			for (int j = i; j <= i + n; j++) {
//				if (j != i)cout << " + ";
//				//sum1 += j * j;
//				cout << j << "^2";
//			}
//			//cout << " =" << endl;
//			printf(" =\n");
//			for (int j = i + n + 1; j <= i + n + n; j++) {
//				//sum2 += j * j;
//				if (j != i + n + 1)cout << " + ";
//				cout << j << "^2";
//			}
//			break;
//		}
//		else {
//			i++;
//		}
//	}
//
//	
//	return 0;
//}