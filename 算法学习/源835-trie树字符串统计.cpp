//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 100010;
//int son[N][26];
//int cnt[N];
//int idx;
//void insert(char s[]) {
//	int p = 0;
//	for (int i = 0; s[i]; i++) {
//		int u = s[i] - 'a';
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//
//	}
//	cnt[p]++;
//}
//int query(char s[]) {
//	int p = 0;
//	for (int i = 0; s[i]; i++) {
//		int u = s[i] - 'a';
//		if (!son[p][u])return 0;
//		p = son[p][u];
//	}
//	return cnt[p];
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		char op, s[N];
//		cin >> op >> s;
//		if (op == 'I')insert(s);
//		else cout << query(s) << "\n";
//	}
//
//
//
//	return 0;
//}