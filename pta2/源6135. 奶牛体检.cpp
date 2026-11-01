//#include<bits/stdc++.h>
//using namespace std;
//const int N = 7505;
//int a[N];
//int b[N];
//int c[N];
//int cnt = 0;
//int n;
//int main() {
//	
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> b[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		if (a[i] == b[i])
//			cnt++;
//	}
//	
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < 2; j++) {
//			int sum = cnt;
//			for (int l = i, r = i + j; l >= 1 && r <= n; l--, r++) {
//				if (a[l] == b[l])sum--;
//				if (a[r] == b[r])sum--;
//				if (a[l] == b[r])sum++;
//				if (a[r] == b[l])sum++;
//				c[sum]++;
//			}
//		}
//	}
//	for (int i = 0; i <= n; i++) {
//		cout << c[i] << endl;
//	}
//
//	return 0;
//}