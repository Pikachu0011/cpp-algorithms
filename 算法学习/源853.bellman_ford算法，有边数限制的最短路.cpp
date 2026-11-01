#include<bits/stdc++.h>
using namespace std;
const int N = 510, M = 10010;
struct edge {
	int a, b, c;
}edges[M];
int n, m, k;
int dist[N], backup[N];


int bell_ford() {
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	for (int i = 1; i <= k; i++) {
		memcpy(backup, dist, sizeof(dist));
		for (int j = 0; j < m; j++) {
			int a = edges[j].a;
			int b = edges[j].b;
			int c = edges[j].c;
			dist[b] = min(dist[b], backup[a] + c);
		}
	}
	if (dist[n] >= 0x3f3f3f3f / 2)return 0x3f3f3f3f / 2;
	else return dist[n];

}
int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		edges[i].a = a;
		edges[i].b = b;
		edges[i].c = c;
	}
	if (bell_ford() == 0x3f3f3f3f / 2)cout << "impossible\n";
	else cout << dist[n] << "\n";



	return 0;
}