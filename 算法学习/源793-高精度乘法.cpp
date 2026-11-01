//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//vector<int> A;
//
//
//vector<int> mult(vector<int>& a, int b) {
//	int t = 0;
//	vector<int> C;
//	for (int i = 0; i < a.size() || t != 0; i++) {
//		if (i < a.size())t = t + a[i] * b;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//	return C;
//}
//int main() {
//	string a;
//	int b;
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//
//	
//	vector<int> C = mult(A, b);
//	for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
//
//	return 0;
//}