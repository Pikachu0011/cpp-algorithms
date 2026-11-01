#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
int fa[N];
int cnt[N];

int findx(int x) {
	if (x != fa[x])fa[x] = findx(fa[x]);
	return fa[x];
}
void merge(int a, int b) {
	if (findx(a) != findx(b)) {
		cnt[findx(a)] += cnt[findx(b)];
		fa[findx(b)] = findx(a);
		
	}
}
bool q1(int a, int b) {
	if (findx(a) == findx(b))return 1;
	else return 0;

}
int q2(int a) {
	return cnt[findx(a)];
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
		cnt[i] = 1;
	}
	while (m--) {
		string op;
		cin >> op;
		if (op == "C") {
			int a, b;
			cin >> a >> b;
			merge(a, b);
		}
		else if (op == "Q1") {
			int a, b;
			cin >> a >> b;

			if (q1(a, b))cout << "Yes\n";
			else cout << "No\n";
		}
		else {
			int a;
			cin >> a;
			cout << q2(a) << "\n";
		}
	}



	return 0;
}