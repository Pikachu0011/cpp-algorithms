#include<bits/stdc++.h>

using namespace std;
const int N = 100010, M = 2 * N;
int h[N], e[M], ne[M], idx;//idx为边编号，值为边尾的节点编号
bool vt[N];//状态数组
int n;
int ans = N;//jieguo
void add(int a, int b) {//添加a->b的一条边
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

int dfs(int u) {//返回以u位根的子树的节点数量
	vt[u] = 1;
	int sum = 1, res = 0;//sum为以u为根的书的节点数量，res为最大联通块的节点数
	for (int i = h[u]; i != -1; i = ne[i]) {//遍历u的子节点编号
		int j = e[i];
		int s;
		if (!vt[j]) {
			vt[j] = 1;
			s = dfs(j);
			sum += s;
		}
		res = max(res, s);
	}
	res = max(res, n - sum);
	ans = min(ans, res);
	return sum;
}
int main() {
	memset(h, -1, sizeof(h));
	cin >> n;
	for (int i = 1; i <= n - 1; i++) {
		int a, b;
		cin >> a >> b;
		add(a, b), add(b, a);
	}
	dfs(1);
	cout << ans;

	return 0;
}