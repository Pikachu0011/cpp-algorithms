#include<bits/stdc++.h>
using namespace std;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int n;
queue<int> qx, qy;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}
bool check1(int x , int y) {
	return x == 1 || x == n || y == 1 || y == n;
}
int arr[35][35];
int vv[35][35] = { 0 };
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}

	}

	for (int i = 1; i <= n; i++) 
		for(int j = 1; j <= n;j++){
			if (arr[i][j]==0 && check1(i, j) && vv[i][j] == 0) {
				qx.push(i);
				qy.push(j);
				arr[i][j] = 3;
				vv[i][j] = 1;
				while (!qy.empty()) {
					int num = qy.size();
					for (int j = 1; j <= num; j++) {
						for (int ii = 0; ii < 4; ii++) {
							int nx = qx.front() + dx[ii];
							int ny = qy.front() + dy[ii];
							if (check(nx, ny) && arr[nx][ny] == 0 && vv[nx][ny] == 0) {
								qx.push(nx);
								qy.push(ny);
								arr[nx][ny] = 3;
								vv[nx][ny] = 1;
							}
						}
						qx.pop();
						qy.pop();
					}
				}
			}
		
	}
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {

			if (arr[i][j] == 0)
				cout << "2 ";
			else if (arr[i][j] == 3)
				cout << "0 ";
			else
				cout << arr[i][j] << " ";


		}
		cout << endl;
	}
	

	return 0;
}