//#include<bits/stdc++.h>
//using namespace std;
//const int Q = 1000;
//
//int main() {
//	int n, m, q;
//	cin >> n >> m >> q;
//	int arr[n + 1][m + 1];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			arr[i][j] = 0;
//
//	while (q--) {
//		int t, c;
//		cin >> t >> c;
//		if (t == 0) {
//			for (int i = 1; i <= m; i++)//一整行 
//				arr[c][i] = 1;
//		}
//		else {
//			for (int i = 1; i <= n; i++)//一整列
//				arr[i][c] = 1;
//		}
//
//	}
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			if (arr[i][j] == 0)
//				count++;
//
//	cout << count << endl;
//
//
//
//
//
//	return 0;
//}