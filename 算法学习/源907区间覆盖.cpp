//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//struct edge {
//	int l, r;
//}edges[N];
//bool cmp(edge a, edge b) {
//	return a.l < b.l;
//}
//int n;
//int main() {
//	int st, ed;
//	scanf("%d%d", &st, &ed);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int l, r;
//		scanf("%d%d", &l, &r);
//		edges[i] = { l,r };
//	}
//	int res = 0;
//	int flag = 0;
//	sort(edges, edges + n, cmp);
//	for (int i = 0; i < n; i++) {
//		int j = i, r = -2e9;
//		while(j < n && edges[j].l <= st) {
//			r = max(r, edges[j].r);
//			j++;
//		}
//		if (r < st) {
//			res = -1;
//			break;
//		}
//		res++;
//		
//		if (r >= ed) {
//			flag = 1;
//			break;
//		}
//		st = r;
//		i = j - 1;
//	}
//	if (!flag)res = -1;
//	printf("%d", res);
//
//	return 0;
//}