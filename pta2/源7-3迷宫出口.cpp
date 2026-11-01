#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int arr[N][N];
bool book[N][N];
int ha, la, hb, lb;
int n;
bool flag = false;
struct node {
	int x;
	int y;
	
};
int np[4][2]{
	{0,1},
	{1,0},
	{0,-1},
	{-1,0}
};
queue<node> que;
void bfs() {
	node startnode;
	startnode.x = ha;
	startnode.y = la;
	//startnode.step = 0;
	book[ha][la] = 1;
	que.push(startnode);
	while (!que.empty()) {
		for (int i = 0; i < 4; i++) {
			int nx = que.front().x + np[i][0];
			int ny = que.front().y + np[i][1];
			if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !book[nx][ny] && arr[nx][ny] == 0) {
				book[nx][ny] = true;
				node newnode;
				newnode.x = nx;
				newnode.y = ny;
				que.push(newnode);
			}
			if (nx == hb && ny == lb) {
				flag = true;
				return;
			}
		}
		que.pop();
	}
}
int main() {
	
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	cin >> ha >> la >> hb >> lb;
	bfs();
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
		

	return 0;
}