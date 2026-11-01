//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int MAXN = 1e6 + 10;
//int n;
//struct non {
//	int left;
//	int right;
//
//};
//non arr[MAXN];
//int ans = 0;
//
//void dfs(int m, int deep) {//m表示编号，
//	if (m == 0)return;
//	ans = max(ans, deep);
//	dfs(arr[m].left, deep + 1);
//	dfs(arr[m].right, deep + 1);
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i].left >> arr[i].right;
//	}
//	dfs(1, 1);//根节点默认编号为1
//	cout << ans << endl;
//
//	return 0;
//}
///*
//1							1
//						2		7
//					  3   6		
//					 4 5
//
//
//*/