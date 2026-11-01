//#include<bits/stdc++.h>
//using namespace std;
//const int N = 510,INF = 0x3f3f3f3f;
//int g[N][N];//ÁÚ½Ó¾ØÕó
//int dist[N];
//bool vt[N];
//int n, m;
//int prim() {
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		int t = -1;
//		for (int j = 1; j <= n; j++) {
//			if (!vt[j] && (t == -1 || dist[t] > dist[j])) {
//				t = j;
//			}
//		}
//		if (i && dist[t] == INF)return INF;
//		if(i)res += dist[t];
//		vt[t] = 1;
//		
//		for (int j = 1; j <= n; j++)dist[j] = min(dist[j], g[t][j]);
//	}
//	return res;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	memset(g, 0x3f, sizeof(g));
//
//	for (int i = 1; i <= m; i++) {
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		g[a][b] =g[b][a] = min(g[a][b], c);
//
//	}
//	int t = prim();
//	if (t == INF)printf("impossible\n");
//	else printf("%d", t);
//
//
//	return 0;
//}