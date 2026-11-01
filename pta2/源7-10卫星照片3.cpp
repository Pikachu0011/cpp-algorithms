#include<bits/stdc++.h>
using namespace std;
int n, m, l1 = 10000, l2 = 10000, r1 = -1, r2 = -1, sum1 = 0, sum2 = 0;
char a[1005][1005];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int vt[1005][1005];
queue<int> qx, qy;
bool check(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == '.') vt[i][j] = 1;
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == '#' && vt[i][j] == 0) {
				l1 = i;
				l2 = j;
				r1 = i;
				r2 = j;

				ans++;
				qx.push(i);
				qy.push(j);
				vt[i][j] = 1;
				a[i][j] = '.';
				while (1) {

					int num = qx.size();
					if (num == 0) break;
					for (int i = 0; i < num; i++) {
						for (int j = 0; j < 4; j++) {
							int tx = qx.front() + dx[j];
							int ty = qy.front() + dy[j];
							if (check(tx, ty) && a[tx][ty] == '#' && vt[tx][ty] == 0) {
								ans++;
								if (tx < l1) {
									l1 = tx;
								}
								if (ty < l2) {
									l2 = ty;
								}
								if (tx > r1) {
									r1 = tx;
								}
								if (ty > r2) {
									r2 = ty;
								}
								qx.push(tx);
								qy.push(ty);
								vt[tx][ty] = 1;
								a[tx][ty] = '.';
							}
						}
						qx.pop();
						qy.pop();
					}
				}
				if ((r1 - l1 + 1) * (r2 - l2 + 1) == ans) sum1++;
				else sum2++;
				ans = 0;
			}
		}
	}
	cout << sum1 << endl << sum2;
	return 0;
}
