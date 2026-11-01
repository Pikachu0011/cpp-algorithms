//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int nn;
//	cin >> nn;
//	char c;
//	cin >> c;
//	getchar();
//	string str;
//	getline(cin, str);
//	int count = str.size();
//	stack<char> sta;
//	if (nn < count) {
//		for (int i = 0; i < nn; i++) {
//			sta.push(str[count - 1]);
//			count--;
//		}
//		for (int i = 0; i < nn; i++) {
//			cout << sta.top() ;//²é¿´Õ»¶¥
//			sta.pop();//³öÕ»
//		}
//		cout << endl;
//
//	}
//	else {
//		int num = nn - count;
//		for (int i = 1; i <= num; i++) {
//			cout << c;
//		}
//		cout << str << endl;
//	}
//
//	return 0;
//}