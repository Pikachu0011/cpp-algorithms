//#include<bits/stdc++.h>
//
//using namespace std;
//int main() {
//	string a;
//	getline(cin, a);
//	string b;
//	getline(cin, b);
//	queue<char> que;
//	int count=0;
//	for (int i = 0; i < a.size(); i++) {
//		int count = 0;
//		for (int j = 0; j < b.size(); j++) {
//			if (a[i] == b[j]) {
//				count=1;
//			}
//		}
//		if (count == 0) {
//			que.push(a[i]);
//			
//		}
//	}
//	while (que.empty()!=1) {
//		cout << que.front();
//		que.pop();
//	}
//	
//
//
//	return 0;
//}