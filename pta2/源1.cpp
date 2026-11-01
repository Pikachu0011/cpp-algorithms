#include<bits/stdc++.h>
using namespace std;
int n;
int arr[6];
bool vt[6];
void dfs(int num) {//num表示位数
	if (num >= 4) {
		for (int i = 1; i <= 3; i++) {

			cout << arr[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vt[i] == 0) {
			arr[num] = i;
			vt[i] = 1;
			dfs(num + 1);
			vt[i] = 0;
		}
	}
}
int main() {
	cin >> n;
	dfs(1);

	return 0;
}