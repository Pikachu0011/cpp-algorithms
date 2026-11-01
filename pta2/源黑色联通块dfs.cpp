#include<bits/stdc++.h>
using namespace std;
char arr[705][705];
//bool vt[705][705];
int n;
int dx[8] = { -1,1,0,0,-1,-1,1,1 };
int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;

}
void dfs(int x, int y) {
	
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny)  && arr[nx][ny] == '1') {
			arr[nx][ny] = '0';
			dfs(nx, ny);
		}
	}
	
}
int main() {
	cin >> n;
	int res = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == '1') {
				arr[i][j] = '0';
				res++;
				dfs(i, j);
			}
		}
	cout << res << endl;

	return 0;
}