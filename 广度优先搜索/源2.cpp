#include<bits/stdc++.h>
using namespace std;
struct node {
	int x;
	int y;
	int step;

};
int a[101][101];
bool book[101][101];
int n, m;
int start_x;
int start_y;
int end_x;
int end_y;
int np[4][2] = {
	{0,1},
	{1,0},
	{0,-1},
	{-1,0}
};
queue<node> que;
bool flag = false;

void bfs() {
	node startnode;
	startnode.x = start_x;
	startnode.y = start_y;
	startnode.step = 0;
	book[start_x][start_y] = true;
	que.push(startnode);
	while (!que.empty()) {
		for (int i = 0; i < 4; i++) {//四个方向走一走
			int nx = que.front().x + np[i][0];
			int ny = que.front().y + np[i][1];
			if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !book[nx][ny] && a[nx][ny] == 0) {
				book[nx][ny] = true;
				node newnode;
				newnode.x = nx; newnode.y = ny; newnode.step = que.front().step + 1;
				que.push(newnode);

			}
			if (nx == end_x && ny == end_y) {
				flag = true;
				return;
			}
		}
		que.pop();
	}


}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> start_x >> start_y >> end_x >> end_y;
	bfs();
	if (flag)
		cout << que.back().step;
	else {
		cout << -1;
	}


	return 0;
}