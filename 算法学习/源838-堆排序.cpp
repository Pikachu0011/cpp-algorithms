#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int h[N];
int n, m;
int cnt;
void down(int u) {//down²Ù×÷
	int t = u;
	if (2 * u <= cnt && h[2 * u] < h[t]) t = 2 * u;
	if (2 * u + 1 <= cnt && h[2 * u + 1] < h[t])t = 2 * u + 1;
	if (t != u) {
		swap(h[t], h[u]);
		down(t);
	}
}


int main() {
	cin >> n >> m;
	cnt = n;
	for (int i = 1; i <= n; i++)cin >> h[i];
	for (int i = n / 2; i ; i--)down(i);
	//for (int i = 1; i <= n; i++)cout << h[i] << " ";
	while (m--) {
		cout << h[1] << " ";
		h[1] = h[cnt];
		cnt--;
		down(1);
	}

	return 0;
}