//#include<bits/stdc++.h>
//#include<unordered_set>
//using namespace std;
//int a, b;
//unordered_set<int> st[10005];
//int vis[10005];
//bool flag = 0;
//bool prime(int num) {
//	if (num == 1)
//		return 0;
//	for (int i = 2; i <= sqrt(num); i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int pfh(int num) {
//	int sum = 0;
//	while (num > 0) {
//		int k = num % 10;
//		sum += (k * k);
//		num /= 10;
//	}
//	return sum;
//
//}
//void dfs(int root, int di, int lev) {
//	st[root].insert(di);
//
//	if (di == 1) {
//		if (vis[root] != -1)	vis[root] = lev;
//		return;
//	}
//	if (st[root].find(pfh(di)) != st[root].end())
//		return;
//	if (pfh(di) >= a && pfh(di) <= b)vis[pfh(di)] = -1;
//
//	dfs(root, pfh(di), lev + 1);
//
//}
//
//int main() {
//	cin >> a >> b;
//	for (int i = a; i <= b; i++) {
//		dfs(i, i, 0);
//	}
//	for (int i = a; i <= b; i++) {
//		if (vis[i] >= 1) {
//			flag = 1;
//			if(prime(i))
//				cout << i << " " << vis[i] * 2 << endl;
//			else
//				cout << i << " " << vis[i] << endl;
//		}
//	}
//	if (!flag)
//		cout << "SAD" << endl;
//	return 0;
//}