#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
char a[N][N];
set<ll> se;
int n, m;
bool cha(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}
int check(int i, int j) {
	int ans = 0;
	for (int k = 0; k < 4; k++) {
		int nx = i + dx[k];
		int ny = i + dy[k];
		if (cha(nx, ny) && a[nx][ny] == a[i][j])ans++;
	}
	return ans * ans;
}
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 0; i < (1 << n); i++) {
		int t = i;
		for (int j = 1; j <= n; j++) {
			if()
		}
	}
	
		

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();



	return 0;
}