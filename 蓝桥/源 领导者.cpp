#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n;
int e[N];
char arr[N];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i] == 'G')arr[i] = 0;
		else arr[i] = 1;
	}
	int l[2] = { n,n }, r[2] = { 1,1 };
	for (int i = 1; i <= n; i++) {
		l[arr[i]] = min(l[arr[i]], i);
		r[arr[i]] = max(l[arr[i]], i);
		
	}
	for (int i = 1; i <= n; i++)cin >> e[i];
	int res = 0;
	if (e[l[0]] >= r[0] && e[l[1]] >= r[1])res++;
	int a = arr[1], b = !arr[1];
	if (e[l[b]] >= r[b]) {
		for (int i = 1; i < l[b]; i++) {
			if (e[i] >= l[b])res++;

		}
		if (e[1] >= r[a] && e[1] >= l[b])res--;
	}
	cout << res;

	return 0;
}