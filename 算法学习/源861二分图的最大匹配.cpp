#include<bits/stdc++.h>
using namespace std;
const int N = 510, M = 100010;
int n1, n2, m;
int match[N];
int h[N], e[M], ne[M], idx = 0;
bool vt[N];
void add(int a, int b) {
	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}
bool find(int x) {
	for (int i = h[x]; i != -1; i = ne[i]) {
		int j = e[i];
		if (!vt[j]) {
			vt[j] = 1;
			if (match[j] == 0 || find(match[j])) {
				
				match[j] = x;

				return true;
			}
		}
	}
	return false;
}
int main() {
	cin >> n1 >> n2 >> m;
	memset(h, -1, sizeof(h));
	for (int i = 1; i <= m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		add(a, b);
	}
	int res = 0;
	for (int i = 1; i <= n1; i++) {
		memset(vt, 0, sizeof(vt));
		if (find(i))res++;
	}
	printf("%d", res);


	return 0;
}