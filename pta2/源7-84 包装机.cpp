#include<bits/stdc++.h>
using namespace std;
const int N = 100;
queue<char> qq[N + 4];
stack<char> vv;
char t;
int k;
int main() {

	int n, m, smax;
	cin >> n >> m >> smax;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> t;
			qq[i].push(t);

		}


	}
	while (cin >> k && k != -1) {
		if (k == 0 && vv.size() != 0) {
			cout << vv.top();
			vv.pop();
		}
		else if (k != 0) {
			if (qq[k].size() == 0)
				continue;
			else {
				if (vv.size() == smax) {
					cout << vv.top();
					vv.pop();
				}
				vv.push(qq[k].front());
				qq[k].pop();
			}
		}
	}





	return 0;
}