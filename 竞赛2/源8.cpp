#include<bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 5005;
int arr[N][M];
int sum_hang[N][M];
int sum_lie[N][M];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}
	for (int i = 1; i <= n; i++) {//行
		sum_hang[i][1] = arr[i][1];
		for (int j = 2; j <= m; j++) {//列
			sum_hang[i][j] = sum_hang[i][j - 1] + arr[i][j];
		}
		
	}
	for (int i = 1; i <= m; i++) {//列
		sum_lie[1][i] = arr[1][i];
		for (int j = 2; j <= n; j++) {//行
			sum_lie[j][i] = sum_lie[j - 1][i] + arr[j][i];
		}

	}
	cout << "sum_hang" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << sum_hang[i][j] << " ";

		}
		cout << endl;
	}
	cout << "sum_lie" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << sum_lie[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}