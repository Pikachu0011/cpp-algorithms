#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 5;
vector<int> z[N];
char sex[N];
bool vt[N];
int n;
bool flag = 0;
void dfs(int id, int num) {
	if (num >= 4)
		return;
	for (int i = 0; i < z[id].size(); i++) {
		if (vt[z[id][i]] == 0) {
			vt[z[id][i]] = 1;
			dfs(z[id][i], num + 1);
		}
		else {
			flag = 1;
			return;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int id, fa, ma;
		char fe;
		cin >> id >> fe >> fa >> ma;
		sex[id] = fe;
		if (fa != -1) {
			z[id].push_back(fa);
			sex[fa] = 'M';
		}
		if (ma != -1) {
			z[id].push_back(ma);
			sex[ma] = 'F';
		}

	}
	int k;
	cin >> k;
	while (k--) {
		int a, b;
		cin >> a >> b;
		if (sex[a] == sex[b]) {
			cout << "Never Mind" << endl;
		}
		else {
			memset(vt, 0, sizeof(vt));
			flag = 0;
			vt[a] = 1;
			vt[b] = 1;
			dfs(a, 0);
			dfs(b, 0);
			if (flag) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}

	}


	return 0;
}