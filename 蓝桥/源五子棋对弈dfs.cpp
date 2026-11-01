#include<bits/stdc++.h>
using namespace std;
int arr[30][30];
bool check() {
	int bai = 0;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			if (arr[i][j] == 0)bai++;
	if (bai != 13)return 0;
	int duijiao1 = arr[1][1] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5];
	int duijiao2 = arr[1][5] + arr[2][4] + arr[3][3] + arr[4][2] + arr[5][1];
	if (duijiao1 == 5 || duijiao1 == 0 || duijiao2 == 5 || duijiao2 == 0)return 0;
	for (int i = 1; i <= 5; i++) {//检查每一行
		int ans = arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4] + arr[i][5];
		if (ans == 0 || ans == 5)return 0;
	}
	for (int i = 1; i <= 5; i++) {//检查每一列
		int ans = arr[1][i] + arr[2][i] + arr[3][i] + arr[4][i] + arr[5][i];
		if (ans == 0 || ans == 5)return 0;
	}
	return 1;
}
int sum = 0;
void dfs(int num) {
	if (num == 25) {
		if (check())sum++;
		return;
	}
	int nx = num / 5 + 1 , ny = num % 5 + 1;
	arr[nx][ny] = 0;
	dfs(num + 1);
	arr[nx][ny] = 1;
	dfs(num + 1);
}
int main() {
	dfs(0);
	cout << sum << endl;
	return 0;
}
//白棋13个  白棋为0；
//黑棋12个  黑棋为1；
//*****
//*****
//*****
//*****
//*****
