//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<vector<int>>c(n + 5, vector<int>(m + 5));
//	while (m--) {
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		c[x1][y1]++;
//		c[x1][y2 + 1]--;
//		c[x2 + 1][y1]--;
//		c[x2 + 1][y2 + 1]++;
//
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			c[i][j] = c[i][j] + c[i - 1][j] + c[i][j - 1] - c[i - 1][j - 1];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cout << c[i][j] % 2;
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}