#include<bits/stdc++.h>
using namespace std;
int n, m;
const int N = 2e5 + 5;
long long a[N];
int b[N];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)scanf("%lld", &a[i]);
	for (int i = 1; i <= m; i++)scanf("%d", &b[i]);
	for (int i = 1; i <= m; i++) {
		int t = 0;//被吃掉的部分
		for (int j = 1; j <= n; j++) {
			
			if (t >= a[j])continue;
			int eat = min(a[j], (long long )b[i]) - t;
			a[j] += eat;
			t += eat;
			if (t == b[i])break;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}