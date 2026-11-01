//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[300], tre[300], treecount = 1;
//void dfs(int now) {
//	if (now > n) {
//		return;
//	}
//	dfs(2 * now);
//	dfs(2 * now + 1);
//	tre[now] = a[treecount];
//	treecount++;
//	return;
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	dfs(1);
//	for (int i = 1; i <= n; i++) {
//		if (i != 1)cout << " ";
//		cout << tre[i];
//	}
//
//	return 0;
//}