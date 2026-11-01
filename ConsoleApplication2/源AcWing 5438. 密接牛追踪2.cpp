#include<bits/stdc++.h>
using namespace std;
const int N = 300010;
int n;
char s[N];
vector<int> cnt;

int main() {
	cin >> n >> s;
	int r = n;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			continue;
		}
		int j = i + 1;
		while (j < n && s[j] == '1') {
			j++;
		}
		int c = j - i, d = (c - 1) / 2;

		if (!i||j==n) {
			d = c - 1;
		}
		r = min(r, d);
		cnt.push_back(c);
		i = j;
	}
	int res = 0;
	for (int c : cnt) {
		res += (c + r * 2) / (r * 2 + 1);

	}
	cout << res << endl;

	return 0;
}