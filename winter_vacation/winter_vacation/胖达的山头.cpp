#include<bits/stdc++.h>
using namespace std;
const int N = 24 * 60 * 60 + 10;
struct tim {
	int st;
	int ed;
};

int arr[N];
int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n--) {
		int x1, y1, z1;
		int x2, y2, z2;
		scanf("%d:%d:%d %d:%d:%d", &x1, &y1, &z1, &x2, &y2, &z2);
		tim x;
		x.st = x1 * 60 * 60 + y1 * 60 + z1;
		x.ed = x2 * 60 * 60 + y2 * 60 + z2;
		arr[x.st] = 1;
		arr[x.ed + 1] = -1;
	}
	int maxx = 0, cur = 0;
	for (int i = 0; i < N; i++) {
		cur += arr[i];
		maxx = max(maxx, cur);
	}
	cout << maxx << endl;


}