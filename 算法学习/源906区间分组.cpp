#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
struct edge {
	int l, r;
}edges[N];
bool cmp(edge a, edge b) {
	return a.l < b.l;
}
int n;
priority_queue<int, vector<int>, greater<int>> h;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int l, r;
		scanf("%d%d", &l, &r);
		edges[i] = { l,r };
	}
	sort(edges, edges + n, cmp);
	for (int i = 0; i < n; i++) {
		auto t = edges[i];
		if (h.empty() || h.top() >= t.l) {
			h.push(t.r);
		}
		if (h.top() < t.l) {
			h.pop();
			h.push(t.r);
		}
	}
	printf("%d", h.size());
	return 0;
}