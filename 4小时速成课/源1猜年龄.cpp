//#include<bits/stdc++.h>
//using namespace std;
//bool isunique(int n1, int n2) {
//	string s1 = to_string(n1);
//	string s2 = to_string(n2);
//	string s = s1 + s2;
//	if (s.size() != 10)
//		return false;
//	sort(s.begin(), s.end());
//	for (int i = 0; i < 10; i++) {
//		if (i != s[i] - '0')
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	for (int i = 10; i < 30; i++) {
//		int nn1 = pow(i, 3);
//		int nn2 = pow(i, 4);
//		if (isunique(nn1, nn2)) {
//			cout << i << endl;
//			break;
//		}
//
//
//	}
//	
//	
//
//	return 0;
//}