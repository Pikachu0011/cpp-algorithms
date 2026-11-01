#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> vv[N];
int n;
int ans = 0;
int deepans = 0;
void dfs(int di,int deep) {
	if (deep > deepans) {
		deepans = deep;
		ans = di;
	}
	for (int j = 0; j < vv[di].size(); j++) {
		dfs(vv[di][j], deep + 1);
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		for (int i = 0; i < num; i++) {
			int temp;
			cin >> temp;
			vv[i].push_back(temp);
		}
	}
	dfs(1, 1);
	cout << ans << endl;
	return 0;
}