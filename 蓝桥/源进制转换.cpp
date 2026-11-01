//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	//十进制转九进制  (除9取余法) 
//	//2024 -> 2688 
//	int a = 2024;
//	stack<int> st;
//	while (a != 0) {
//		st.push(a % 9);
//		a /= 9;
//	}
//	while (!st.empty()) {
//		cout << st.top();
//		st.pop();
//	}
//	cout << endl;
//	//九进制转十进制
//	//2688 -> 2024
//	string b= "2688";
//	int shi = 0;
//	int j = 0;
//	for (int i = b.size() - 1; i >= 0; i--) {
//		shi += (b[i] - '0') * pow(9, j);
//		j++;
//	}
//	cout << shi << endl;
//
//	return 0;
//}