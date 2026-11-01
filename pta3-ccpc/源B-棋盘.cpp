//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	if (n % 2 == 1) {
//		cout << "YES" << endl;
//		for (int i = 1; i <= n; ++i) {
//			if (i % 2 == 1)
//				for (int j = 1; j <= m; ++j) {
//					if ((i != 1 && j != 1) && (i != n && j != m))
//						printf("%d %d\n", i, j);
//				}
//			else {
//				for (int j = m; j >= 1; --j) {
//					if ((i != 1 && j != 1) && (i != n && j != m))
//						printf("%d %d\n", i, j);
//				}
//			}
//		}
//	}
//	else if (n % 2 == 0 && m % 2 == 1) {
//		cout << "YES" << endl;
//		for (int i = 1; i <= m; ++i) {//列
//			if (i % 2 == 1) {//奇数列
//				for (int j = 1; j <= n; ++j) {//行
//					if (i == 1 && j == 1)continue;
//					cout << j << " " << i << endl;
//				}
//			}
//			else {//偶数列
//				for (int j = n; j >= 1; --j) {//行
//					if (i == m && j == n)continue;
//					cout << j << " " << i << endl;
//				}
//			}
//		}
//	}
//	else {
//		cout << "NO" << endl;
//	}
//	return 0;
//}