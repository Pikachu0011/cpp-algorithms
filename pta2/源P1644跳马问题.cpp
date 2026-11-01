#include<bits/stdc++.h>
using namespace std;
int dx[4] = { 1,2,2,1 };
int dy[4] = { 2,1,-1,-2 };
int n, m, res = 0;
bool vt[20][20];
bool check(int x, int y) {
	return x >= 0 && x <= m && y >= 0 && y <= n;
}
void dfs(int x, int y) {
	if (x == m && y == n) {
		res++;
		return;
	}
	for (int i = 0; i < 4; i++ ) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if (check(nx, ny)&&vt[nx][ny]==0) {
			dfs(nx, ny);
			vt[nx][ny] = 0;
		}
	}
}
int main() {
	cin >> n >> m;
	dfs(0, 0);
	cout << res << endl;
	return 0;
}