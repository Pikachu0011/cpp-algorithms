#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
int vt[105][105];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int n;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}
int ha, la, hb, lb;
int flag = 0;
void dfs(int x, int y) {
	if (x == hb && y == lb) {
		flag = 1;
		
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny) && vt[nx][ny] == 0 && arr[nx][ny] == 0) {
			vt[nx][ny] = 1;
			arr[nx][ny] = 1;
			dfs(nx, ny);
			vt[nx][ny] = 0;
			arr[nx][ny] = 0;
		}
	}

}
int main() {
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	cin >> ha >> la >> hb >> lb;
	dfs(ha, la);
	if (!flag)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}