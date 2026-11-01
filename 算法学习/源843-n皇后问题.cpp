#include<bits/stdc++.h>

using namespace std;
const int N = 20;
int n;
char g[N][N];
bool l[N], dg[N], udg[N];
void dfs(int u) {//ÐÐ
	if (u == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << g[i][j];
			}
			cout << endl;
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {//ÁÐ
		if (!l[i] && !dg[i + u] && !udg[n + -u + i]) {
			g[u][i] = 'Q';
			
			l[i] = 1;
			dg[i + u] = 1;
			udg[n + -u + i] = 1;
			dfs(u + 1);
		
			l[i] = 0;
			dg[i + u] = 0;
			udg[n + -u + i] = 0;
			g[u][i] = '.';

		}
	}
}
int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			g[i][j] = '.';
		}
	}
	dfs(0);


	return 0;
}