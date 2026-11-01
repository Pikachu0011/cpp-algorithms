#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
typedef pair<int, int> PII;
PII cow[N];
int n;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int w, s;
		scanf("%d%d", &w, &s);
		cow[i] = { w + s,w };
	}
	sort(cow, cow + n);
	int res = -2e9, sum = 0;
	for (int i = 0; i < n; i++) {
		int w = cow[i].second, s = cow[i].first - w;
		res = max(res, sum - s);
		sum += w;
	}
	printf("%d", res);
	return 0;
}