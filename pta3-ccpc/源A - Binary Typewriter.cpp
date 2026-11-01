////00000011111 1
////10000001111 3 -> 1
////000111000011000111 5
////000111110000000111 5 -> 3
////1111110000000  2->1
////0011000000 2->1
////1111111 1
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//LL t;
//
//int main() {
//	scanf("%lld", &t);
//	while (t--) {
//		LL l;
//		LL sum = 0;
//		string s;
//		scanf("%lld", &l);
//		getchar();
//		getline(cin, s);
//		if (s[0] == '1')sum++;
//		for (LL i = 1; i < l; i++) {
//			if (s[i] != s[i - 1])sum++;
//		}
//		//cout << "ans:";
//		if (sum > 2)cout << l + sum - 2 << "\n";
//		else if (sum == 2)cout << l + sum - 1 << "\n";
//		else cout << l + sum << "\n";
//	}
//
//
//
//	return 0;
//}