//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//int main() {
//	//cout << 'A' - '0' << endl;
//	/*for (int i = 0; i <= 12; i++) {
//		cout <<i<<" "<< (long long)pow(11, i) << endl;
//	}*/
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		LL s = 0;
//		while (n--) {
//			LL a;
//			char b;
//			cin >> a >> b;
//			LL tb;
//			if (b >= '0' && b <= '9')tb = b - '0';
//			else if (b == 'A')tb = 10;
//			else if (b == 'B')tb == 11;
//
//			
//			if (tb % 5 == 0)continue;
//			a %= 5;
//			s += a * tb;
//			s %= 5;
//		}
//		if (s == 0)cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}