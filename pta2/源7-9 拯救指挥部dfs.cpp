#include<bits/stdc++.h>
using namespace std;
char arr[505][505];
int x, y;
bool check(int a, int b) {
	return a >= 1 && a <= x && b >= 1 && b <= y;
}
bool check1(int a, int b) {
	return a == 1 || a == x || b == 1 || b == y;
}
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y) {
	if (arr[x][y] == '0') {
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny) && arr[nx][ny] == '0') {
			arr[nx][ny] = '*';
			dfs(nx, ny);
		}
	}
}
int main() {
	cin >> x >> y;
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			if (check1(i, j) && arr[i][j] == '0') {
				arr[i][j] = '*';
				dfs(i, j);
			}
		}
	}
	int count = 0;
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			if (arr[i][j] == '0')
				count++;
		}
		
	}
	cout << count << endl;
	return 0;
}