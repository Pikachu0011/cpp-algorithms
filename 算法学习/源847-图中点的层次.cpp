//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 100010;
//int n,m;
//
//int h[N], e[N], ne[N], idx;
//int d[N];
//queue<int> q;
//void add(int a, int b) {//节点a存在通向b的一条边
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx++;
//
//}
//int bfs() {
//	memset(d, -1, sizeof(d));
//	d[1] = 0;
//	q.push(1);
//	while (!q.empty()) {
//		int t = q.front();//以t为根节点搜索
//		q.pop();
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			if (d[j] == -1) {
//				d[j] = d[t] + 1;
//				q.push(j);
//			}
//		}
//	}
//	return d[n];
//}
//int main() {
//	cin >> n >> m;
//	memset(h, -1, sizeof(h));
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//	}
//	cout << bfs();
//	return 0;
//}