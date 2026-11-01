#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int n;
struct edge {
	int l, r;
}edges[N];
bool cmp(edge a, edge b) {
	return a.r < b.r;
}
int main() {
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int a, b;
		scanf("%d%d", &a, &b);
		edges[i] = { a,b };
	}
	sort(edges, edges + n, cmp);
	int res = 0, ed = -2e9;
	for (int i = 0; i < n; i++) {
		if (ed < edges[i].l) {
			res++;
			ed = edges[i].r;
		}
	}
	printf("%d", res);
	return 0;
}