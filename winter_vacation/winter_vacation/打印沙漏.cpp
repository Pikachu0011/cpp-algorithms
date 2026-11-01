////补0就是正确答案
//
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 510, M = 5010;
//int n;
//char c;
//int main() {
//	cin >> n >> c;
//	int i = 1;
//	int sum = 1;
//	int ceng = 1;
//	while (1) {
//		i+=2;
//		sum += i * 2;
//		ceng++;
//		if (sum > n) {
//			sum -= i * 2;
//			i-=2;
//			ceng--;
//			break;
//		}
//	}
//	/*cout << sum << endl;
//	cout << i << " " << ceng << endl;*/
//	int tc = 1;
//	while (1) {
//		for (int j = 0; j <= tc - 2; j++)cout << " ";		
//		for (int m = 1; m <= i; m++)cout << c;
//		i -= 2;
//		cout << endl;
//		if (tc == ceng)break;
//		tc++;
//	}
//	//cout << tc << " " << i << endl;//tc = 3. i = -1;
//	i += 4;
//	tc--;
//	while (1) {
//		for (int j = 0; j <= tc - 2; j++)cout << " ";
//		for (int m = 1; m <= i; m++)cout << c;
//		i += 2;
//		cout << endl;
//		//if (tc == 1)break;
//		tc--;
//	}
//	if (n - sum != 0)cout << n - sum << endl;
//	
//	return 0;
//}