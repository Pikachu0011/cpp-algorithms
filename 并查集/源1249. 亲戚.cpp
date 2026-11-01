#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 5;
int a[N];

int findx(int x) {
	int r = x;
	if (a[r] != r)
		a[r] = findx(a[r]);
	
	return a[r];
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		
		a[findx(temp1)] = a[findx(temp2)];
		
		
	}
	int q;
	cin >> q;
	while (q--) {
		int b, c;
		cin >> b >> c;
		puts(findx(b) == findx(c) ? "Yes" : "No");
	}
	return 0;
}