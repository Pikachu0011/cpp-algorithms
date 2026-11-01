#include<bits/stdc++.h>
using namespace std;
int arr[255][255];
int vt[255][255];
int n, m, h;
int main() {
	cin >> n >> m >> h;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	int mcnt = 0;
	int m_x, m_y;
	for (int i = 1; i <= n; i++) {//行
		for (int j = 1; j <= m; j++) {//列
			if (arr[i][j] != 0)continue;
			int cnt = 0;
			for (int k = i - 1; k >= 0; k--) {//检查列上
				if (arr[k][j] < 0)cnt++;
				else if (arr[k][j] < h)continue;
				else if (arr[k][j] >= h)break;
			}
			for (int k = i + 1; k <= n; k++) {//检查列下
				if (arr[k][j] < 0)cnt++;
				else if (arr[k][j] < h)continue;
				else if (arr[k][j] >= h)break;
			}
			for (int k = j - 1; k >= 0; k--) {//检查行左
				if (arr[i][k] < 0)cnt++;
				else if (arr[i][k] < h)continue;
				else if (arr[i][k] >= h)break;
			}
			for (int k = j + 1; k <= m; k++) {//检查行右
				if (arr[i][k] < 0)cnt++;
				else if (arr[i][k] < h)continue;
				else if (arr[i][k] >= h)break;
			}
			if (cnt > mcnt) {
				mcnt = cnt;
				m_x = i;
				m_y = j;
			}
			if (cnt >= 3)ans++;

		}
	}
	cout << ans << endl;
	cout << m_x - 1 << " " << m_y - 1;

	return 0;
}