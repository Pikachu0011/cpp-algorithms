//#include<bits/stdc++.h>
//using namespace std;
//int n;
//char arr[10];
//bool vt[10];
//string str;
//
//void dfs(int num) {//num表示位数
//	if (num >= n ) {
//		for (int i = 0; i < n; i++) {
//
//			cout << arr[i];
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (vt[i] == 0) {
//			arr[num] = str[i];
//			vt[i] = 1;
//			dfs(num + 1);
//			vt[i] = 0;
//		}
//	}
//}
//int main() {
//	cin >> str;
//	n = str.size();
//	dfs(0);
//
//	return 0;
//}