#include<bits/stdc++.h>
using namespace std;
char arr[705][705];
int vv[705][705] = { 0 };
int n;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= n;
}
int dx[8] = { -1,1,0,0,-1,-1,1,1 };
int dy[8] = { 0,0,-1,1,-1,1,-1,1 };
queue<int> qx, qy;
int main() {
	cin >> n;
	int ans = 0;
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) 
			cin >> arr[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == '1' && vv[i][j] == 0) {
				ans++;
				qx.push(i);
				qy.push(j);
				vv[i][j] = 1;
				arr[i][j] = '0';
				while (1) {
					int num = qx.size();
					if (num == 0)
						break;
					for (int m = 1; m <= num; m++) {
						for (int n = 0; n < 8; n++) {
							int nx = qx.front() + dx[n];
							int ny = qy.front() + dy[n];
							if (check(nx, ny) && arr[nx][ny] == '1' && vv[nx][ny] == 0) {
								qx.push(nx);
								qy.push(ny);
								arr[nx][ny] = '0';
								vv[nx][ny] == 1;
							}
						}
						qx.pop();
						qy.pop();
					}
				}
			}
		}
	cout << ans << endl;
		
	return 0;
}