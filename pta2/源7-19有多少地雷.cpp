#include<bits/stdc++.h>
using namespace std;
char arr[105][105] = { 'o' };
vector<vector<int>> vv(105, vector<int>(105, 0));
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			char temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == '*')
				cout << "*";
			else {
				int count = (arr[i - 1][j] == '*') + (arr[i + 1][j] == '*') + (arr[i][j - 1] == '*') + (arr[i][j + 1] == '*') + (arr[i - 1][j - 1] == '*') + (arr[i - 1][j + 1] == '*') + (arr[i + 1][j - 1] == '*') + (arr[i + 1][j + 1] == '*');
				cout << count;
			}
		}
		cout << endl;
	}

	return 0;
}