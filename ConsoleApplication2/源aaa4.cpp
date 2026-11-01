//#include<bits/stdc++.h>
//using namespace std;
//string str[105];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		string temp;
//		cin >> temp;
//		str[i] = temp;
//	}
//	int yu;
//	cin >> yu;
//	getchar();
//	string ss;
//	getline(cin, ss);
//	int count = 0;
//	for (int i = 1; i <= n; i++) {
//		if (ss.find(str[i]) != -1) {
//			count++;
//		}
//	}
//	if (count >= yu) {
//		cout << count << endl;
//		cout << "He Xie Ni Quan Jia!" << endl;
//	}
//	else {
//		for (int i = 1; i <= n; i++) {
//			if (ss.find(str[i]) != -1) {
//				ss.replace(ss.find(str[i]), str[i].size(), "<censored>");
//			}
//			
//		}
//		cout << ss << endl;
//	}
//	
//	return 0;
//}