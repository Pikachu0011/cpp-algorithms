#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int g[N][N];
int n;

int main() {
	cin >> n;
	int col = -1;
	int num;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		g[i][0] = num * 10;
		if (col < num * 10)col = num * 10;
	}
	num = 0;
	int pre = 0;
	for (int i = 1; i <= col; i++) {//列
		for (int j = 1; j <= n; j++) {//编号为j的学校
			if (i > g[j][0])continue;
			if (pre == j)num++;
			g[j][i] = ++num;
			pre = j;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << "#" << i << endl;
		for (int j = 1; j <= g[i][0]; j++) {
			if (j % 10 == 0)cout << g[i][j] << endl;
			else cout << g[i][j] << " ";
		}
	}



	return 0;
}