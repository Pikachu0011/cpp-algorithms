//#include<bits/stdc++.h>
//using namespace std;
//struct xy {
//	int x;
//	int y;
//};
//stack<xy> p;
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//int n;
//bool check(int x, int y) {
//	return x >= 1 && x <= n && y >= 1 && y <= n;
//}
//bool flag = false;
//char arr[25][25];
//bool vt[25][25];
//int nx;
//int ny;
//void dfs(int x, int y) {
//	if (x == n && y == n) {
//		flag = true;
//	}
//	
//
//	if (check(x, y) && vt[x][y] == 0 && arr[x][y] == '0') {
//		vt[x][y] = 1;
//		for (int i = 0; i < 4; i++) {
//			if (!flag) {
//				nx = x + dx[i];
//				ny = y + dy[i];
//				dfs(nx, ny);
//			}
//			
//			if (flag) {
//				xy temp;
//				temp.x = x;
//				temp.y = y;
//				p.push(temp);
//				//printf("(%d,%d)->", x, y);
//				return;
//			}
//		}
//		vt[x][y] = 0;
//	}
//
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	dfs(1, 1);
//	int size = p.size();
//	for (int i = 1; i <= size; i++) {
//		if (i != size)
//			printf("(%d,%d)->", p.top().x, p.top().y);
//		else
//			printf("(%d,%d)\n", p.top().x, p.top().y);
//		p.pop();
//	}
//	return 0;
//}