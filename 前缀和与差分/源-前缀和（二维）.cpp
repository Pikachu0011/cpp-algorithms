#include<bits/stdc++.h>
using namespace std;
const int n = 3, m = 4;
int a[n][m] = { {1,5,6,8},{9,6,7,3},{5,3,2,4} };
int sum[n][m];

void pre_sum() {
	sum[0][0] = a[0][0];
	for (int i = 1; i < n; i++)sum[i][0] = sum[i - 1][0] + a[i][0];
	for (int j = 1; j < m; j++)sum[0][j] = sum[0][j - 1] + a[0][j];
	for (int i = 1; i < n; i++)for (int j = 1; j < m; j++) {
		sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + a[i][j];

	}
	
}
int get_sum(int x1, int y1, int x2, int y2) {
	if (!x1 && !y1)
		return sum[x2][y2];
	if (!x1)
		return sum[x2][y2] - sum[x2][y1 - 1];
	if (!y1)
		return sum[x2][y2] - sum[x1 - 1][y2];
	return sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1];

}
int main() {
	pre_sum();
	cout << get_sum(1, 1, 2, 2) << endl;
	cout << get_sum(0, 1, 1, 3) << endl;


	return 0;
}