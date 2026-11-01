#include<bits/stdc++.h>
using namespace std;
long long n;
long long k;
long long b[25];
bool vt[25];
bool check1(long long num) {
	if (num < 2)return false;
	bool count = true;
	for (long long i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			count = false;
			break;
		}

	}
	return count;
}
long long cnt = 0;

void dfs(long long now, long long sum, long long ss) {//第几个数 和
	if (now >= k + 1) {
		if (check1(sum))
			cnt++;

	}
	for (long long i = ss + 1; i <= n; i++) {
		if (vt[i] == 0) {
			vt[i] = 1;
			dfs(now + 1, sum + b[i], i);
			vt[i] = 0;
		}
	}

}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	dfs(0, 0, 0);
	cout << cnt << endl;
	return 0;
}