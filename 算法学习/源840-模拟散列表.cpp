//拉链法进行哈希
#include<bits/stdc++.h>

using namespace std;
const int N = 100003;
int h[N], e[N], ne[N], idx;

void insert(int x) {
	int k = (x % N + N) % N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;//用单链表存储哈希值为k 的数

}
bool findx(int x) {//查询是否插入x（即先查询哈希值再找）
	int k = (x % N + N) % N;
	for (int i = h[k]; i != -1; i = ne[i]) {
		if (e[i] == x)return 1;
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	memset(h, -1, sizeof(h));//将哈希尾部初始化为-1
	while (n--) {
		char op;
		int x;
		cin >> op >> x;
		if (op == 'I')insert(x);
		else {
			if (findx(x))cout << "Yes\n";
			else cout << "No\n";
		}
	}


	return 0;
}
