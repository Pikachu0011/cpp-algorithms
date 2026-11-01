//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int h[N], e[N], ne[N], idx;
//int d[N];//节点i的入度为d[i]
//int n, m;
//queue<int> qq;
//vector<int> vv;
//void add(int a, int b) {//添加a—>b的一条边
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//bool bfs() {
//	for (int i = 1; i <= n; i++) {
//		
//		if (d[i] == 0)qq.push(i);
//	}
//	while (!qq.empty()) {
//		int t = qq.front();
//		qq.pop();
//		vv.push_back(t);
//		for (int i = h[t]; i != -1; i = ne[i]) {
//			int j = e[i];
//			d[j]--;
//			if (d[j] == 0) {
//				qq.push(j);
//			}
//		}
//	}
//	return vv.size() == n;
//
//}
//
//int main() {
//	cin >> n >> m;
//	memset(h, -1, sizeof(h));
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		cin >> a >> b;
//		d[b]++;
//		add(a, b);
//	}
//	if (bfs()) {
//		for (int i = 0; i < vv.size(); i++)cout << vv[i] << " ";
//
//	}
//
//	else cout << "-1";
//
//	return 0;
//}
