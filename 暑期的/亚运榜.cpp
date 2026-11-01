//#include<bits/stdc++.h>
//using namespace std;
//#define int long long 
//int arr[2][4];
//int n;
//void solve() {
//	cin >> n;
//	while (n--) {
//		int t, p;
//		cin >> t >> p;
//		arr[t][p]++;
//	}
//	for (int i = 0; i < 2; i++) {
//		for (int j = 1; j < 4; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	bool flag = 0;
//	for (int j = 1; j < 4; j++) {
//		if (arr[1][j] < arr[0][j]) {
//			flag = 0;
//			break;
//		}
//		if (arr[1][j] > arr[0][j]) {
//			flag = 1;
//			break;
//		}
//	}
//	if (!flag)cout << "The first win!" << endl;
//	else cout << "The second win!" << endl;
//}
//signed main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	solve();
//
//	return 0;
//}