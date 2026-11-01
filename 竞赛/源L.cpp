#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int a[N];
set<int> s;
int res = 0;
int main() {
	int n;//n¸öÅÌ×Ó
	cin >> n;
	int l, r;
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s.insert(a[i]);

	}
	for (auto k : s) {
		int now = 0;
		for (int i = 1; i <= n; i++) {
			
			int j = i;
			while (j <= n && a[j++] >= k) {
				now += k ;
			}
			res = max(res, now);
			now = 0;
		}

	}
	cout << res << endl;



	return 0;
}