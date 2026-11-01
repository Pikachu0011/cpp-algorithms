#include<bits/stdc++.h>
using namespace std;
const int n = 3, m = 4;
int a[n][m] = { {1,5,6,8},{9,6,7,3},{5,3,2,4} };
int sum[n][m];
int d[n + 1][m + 1] = { 0 };
void pre_d(int x1,int y1,int x2,int y2,int v) {
	d[x1] [y1] += v;
	d[x2 + 1] [y1] -= v;
	d[x1] [y2 + 1] -= v;
	d[x2 + 1][ y2 + 1] += v;

}
void pre_sum() {
	sum[0][0] = d[0][0];
	for (int i = 1; i < n; i++)sum[i][0] = sum[i - 1][0] + d[i][0];
	for (int j = 1; j < m; j++)sum[0][j] = sum[0][j - 1] + d[0][j];
	for (int i = 1; i < n; i++)for (int j = 1; j < m; j++) {
		sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + d[i][j];
		
	}
	for (int i = 0; i < n; i++)for (int j = 0; j < m; j++) {
		
		a[i][j] += sum[i][j];
	}

}

int main() {
	pre_d(0, 0, 2, 1, 3);
	pre_d(1, 1, 2, 2, -1);
	pre_sum();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
/*
[0,0]-[2,1]   +3
[1,1]-[2,2]   -1
*/