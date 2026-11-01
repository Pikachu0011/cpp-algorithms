//#include<bits/stdc++.h>
//using namespace std;
//typedef long long int;
//const int N = 1010;
//int n, a[N];
//vector<int> tree;
//void dfs(int l, int r, int flag) {//flag  0 ÎªÆÕÍ¨BST£¬1Îª¾µÏñBST£»
//	if (l > r)return;
//	int tL = r;//×ó×ÓÊ÷µÄÓÒ¶Ë
//	int tr = l + 1;//ÓÒ×ÓÊ÷µÄ×ó¶Ë
//	if (!flag) {
//		while (tL > l && a[tL] >= a[l])tL--;
//		while (tr <= r && a[tr] < a[l])tr++;
//	}
//	else {
//		while (tL > l && a[tL] < a[l])tL--;
//		while (tr <= r && a[tr] >= a[l])tr++;
//	}
//	if (tr - tL != 1)return;
//	dfs(l + 1, tL, flag);
//	dfs(tr, r, flag);
//	tree.push_back(a[l]);
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	dfs(0, n - 1, 0);
//	if (tree.size() != n) {
//		tree.clear();
//		dfs(0, n - 1, 1);
//	}
//	if (tree.size() != n) {
//		cout << "NO" << endl;
//	}
//	else {
//		cout << "YES" << endl;
//		for (int i = 0; i < n; i++) {
//			cout << tree[i] << " ";
//		}
//	}
//
//	return 0;
//}