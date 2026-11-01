#include<bits/stdc++.h>
using namespace std;
stack<int> st_a, st_b;
int n;
int cnt = 0;
int maxx = 0;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		if (st_a.empty()) {
			st_a.push(t);
			continue;
		}
		else if (t < st_a.top()) {
			st_a.push(t);
			continue;
		}
		else {
			if (st_b.empty() || st_b.top() < t) {
				st_b.push(t);
			}
			else {
				cnt++;
				maxx = max(maxx, (int)st_a.size());
				while (!st_a.empty())st_a.pop();
				while ((!st_b.empty()) && st_b.top() > t) {
					st_a.push(st_b.top());
					st_b.pop();
				}
				st_a.push(t);

			}
		}

	}
	cnt = cnt + (!st_a.empty()) + (!st_b.empty());
	maxx = max(maxx, (int)st_a.size());
	maxx = max(maxx, (int)st_b.size());
	cout << cnt << " " << maxx << endl;


	return 0;
}