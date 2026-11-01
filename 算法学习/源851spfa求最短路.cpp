#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int h[N], e[N], w[N], ne[N], idx;
int dist[N];
bool st[N];
int n, m;
void add(int a, int b, int c) {
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
}

int spfa() {
	queue<int> q;
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	q.push(1);
	st[1] = true;
	while (!q.empty()) {
		int t = q.front();
		q.pop();
		st[t] = false;
		for (int i = h[t]; i != -1; i = ne[i]) {
			int j = e[i];
			if (dist[j] > dist[t] + w[i]) {
				dist[j] = dist[t] + w[i];
				if (!st[j]) {
					st[j] = true;
					q.push(j);
				}
			}
			
		}
	}
	return dist[n];
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		add(a, b, c);
	}
	if (spfa() == 0x3f3f3f3f)cout << "impossible\n";
	else cout << dist[n] << endl;


	return 0;
}