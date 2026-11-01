#include<bits/stdc++.h>
using namespace std;
int n;
int arr[15];//第i行的列数为arr[i];
//bool hang[15];
bool lie[15];
bool duijiao[30];
bool fu_duijiao[30];
int res = 0;

void dfs(int now) {//表示位数||行位
	if (now > n) {
		res++;
		if (res <= 3) {
			for (int i = 1; i <= n; i++) {
				if (i != 1)cout << " ";
				cout << arr[i];
			}
			cout << endl;
			return;
		}
		
		return;
		
	}
	for (int i = 1; i <= n; i++) {//列数
		if (!lie[i] && !duijiao[now - i + n] && !fu_duijiao[now + i]) {
			arr[now] = i;
			lie[i] = 1;
			duijiao[now - i + n] = 1;
			fu_duijiao[now + i] = 1;
			dfs(now + 1);
			arr[now] = 0;
			lie[i] = 0;
			duijiao[now - i + n] = 0;
			fu_duijiao[now + i] = 0;
		}
	}
}
int main() {

	cin >> n;
	dfs(1);
	cout << res << endl;
	return 0;
}