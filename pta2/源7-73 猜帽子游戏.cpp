//#include<bits/stdc++.h>
//using namespace std;
//int arr[105];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> arr[i];
//	int k;
//	cin >> k;
//	while (k--) {
//		int Y = 0, N = 0, A = 0;
//		for (int i = 1; i <= n; i++) {
//			int temp;
//			cin >> temp;
//			if (temp == arr[i])Y++;
//			else if (temp == 0)A++;
//		}
//		N = n - Y - A;
//		//cout << Y << N << A << endl;
//		if (N == 0 && Y >= 1)cout << "Da Jiang!!!" << endl;
//		else if (A == n || N >= 1)cout << "Ai Ya" << endl;
//
//	}
//
//	return 0;
//}