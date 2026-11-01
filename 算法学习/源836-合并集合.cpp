#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
int fa[N];//i的父亲是fa[i];
int findx(int x) {//查询x的祖先(路径压缩)
	if (fa[x] != x)fa[x] = findx(fa[x]);

	return fa[x];
}
void merge(int a, int b) {
	if (findx(a) != findx(b)) {
		fa[findx(b)] = a;
	}

}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)fa[i] = i;
	while (m--) {
		char op;
		int a, b;
		cin >> op >> a >> b;
		if (op == 'M') {
			merge(a, b);
		}
		else {
			if (findx(a) == findx(b))cout << "Yes\n";
			else cout << "No\n";
		}
	}



	return 0;
}