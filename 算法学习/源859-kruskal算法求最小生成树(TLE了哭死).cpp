///*
//先对边从小到大排序
//判断ab边是否属于同一个连通块
//如果不是的话放进连通块集合
//最后判断边的数量是否等于n-1
//*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010, M = 200010;
//int f[N];
//int n, m;
//
//struct edge {
//	int a, b, w;
//}edges[M];
//bool cmp(edge a, edge b) {
//	return a.w < b.w;
//}
//int findx(int x) {
//	if (x != f[x])f[x] = findx(f[x]);
//	return f[x];
//}
//
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)f[i] = i;
//	for (int i = 0; i < m; i++) {
//		int a, b, w;
//		scanf("%d%d%d", &a, &b, &w);
//		edges[i] = { a,b,w };
//	}
//	sort(edges, edges + m, cmp);
//	int cnt = 0, res = 0;
//	for (int i = 0; i < m; i++) {
//		int a = edges[i].a;
//		int b = edges[i].b;
//		int w = edges[i].w;
//		a = findx(a), b = findx(b);
//		if (a != b) {
//			f[a] = b;
//			cnt++;
//			res += w;
//		}
//	}
//	if (cnt == n - 1)printf("%d\n", res);
//	else printf("impossible\n");
//
//	return 0;
//}