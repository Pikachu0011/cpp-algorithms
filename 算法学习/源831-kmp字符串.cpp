#include<bits/stdc++.h>

using namespace std;

const int N = 100010, M = 1000010;
char p[N], s[M];
int ne[N];
int n, m;

int main() {
	cin >> n >> p + 1 >> m >> s + 1;
	//构造ne数组
	ne[1] = 0;
	for (int i = 2,j = 0; i <= n; i++) {
		while (j && p[i] != p[j + 1])j = ne[j];
		if (p[i] == p[j + 1])j++;
		ne[i] = j;
	}
	//kmp过程
	for (int i = 1, j = 0; s[i]; i++) {
		while (s[i] != p[j + 1])j = ne[j];
		if (s[i] == p[j + 1])j++;
		if (j == n) {
			cout << i - n + 1 - 1 << "\n";
			j = ne[j];
		}
	}




	return 0;
}