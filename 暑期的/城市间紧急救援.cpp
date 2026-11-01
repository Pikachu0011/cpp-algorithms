#include<bits/stdc++.h>
using namespace std;
const int N = 510, M = 1100;
int h[N], e[M], ne[M], w[M], idx;
int dist[N];
int state[N];
int n, m, s, d;
int num[N];
void add(int a, int b, int c) {
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
}
void Dijjstra() {
	memset(dist, 0x3f, sizeof(dist));
	dist[s] = 0;

}

void solve() {
	cin >> n >> m >> s >> d;
	for (int i = 0; i < n; i++)cin >> num[i];
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
		add(b, a, c);
	}
}

signed main() {

	solve();
	return 0;
}