#include<bits/stdc++.h>
using namespace std;
int dx[8] = { -1,-1,0,1,1,1,0,-1 };

int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
vector<int> path;
vector<int> res;
const int N = 11;
int arr[N][N];

bool vis[N][N];
int n, k;
bool ban[N][N][N][N];
bool check(int x, int y) {
	return x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1;
}
void dfs(int x, int y) {
	if (!res.empty())return;
	if (x == n - 1 && y == n - 1) {
		if (path.size() == n * n - 1) {
			res = path;
		}
		return;
	}
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (check(nx, ny) && !vis[nx][ny] && arr[nx][ny]==(arr[x][y]+1)%k ) {
			if (dx[i] != 0 && dy[i] != 0 && ban[nx][y][x][ny]) {
				continue;
			}
			vis[nx][ny] = 1;
			path.push_back(i);
			ban[x][y][nx][ny] = 1;
			ban[nx][ny][x][y] = 1;
			dfs(nx, ny);
			vis[nx][ny] = 0;
			path.pop_back();
			ban[x][y][nx][ny] = 0;
			ban[nx][ny][x][y] = 0;
		}
	}
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)cin >> arr[i][j];
	vis[0][0] = 1;
	dfs(0, 0);
	if (!res.empty()) {
		for (auto x : res)cout << x;
	}
	else cout << -1;

	return 0;
}