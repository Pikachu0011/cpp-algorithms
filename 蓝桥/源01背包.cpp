#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int f[N][N];//f[i][j]所有只考虑前i个物品，且总体积不超过j的最大价值
int v[N], w[N];
int n,V;
int main() {
	cin >> n >> V;
	for (int i = 1; i <= n; i++) {
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= V; j++) {
			f[i][j] = f[i - 1][j];
			if (j >= v[i]) {
				f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i]] + w[i]);
			}
		}
	}
	cout << f[n][V];
	return 0;
}