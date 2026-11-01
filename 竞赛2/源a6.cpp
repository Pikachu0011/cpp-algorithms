#include<bits/stdc++.h>
using namespace std;
int arr[10][10];
set<int> se;
int main() {
	bool flag = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> arr[i][j];
		}
	}
	for (int j = 1; j <= 9; j++) {
		se.clear();
		for (int i = 1; i <= 9; i++) {
			se.insert(arr[j][i]);
			if (se.size() != 9) {
				cout << "0" << endl;
				return 0;
			}
		}
	}
	
	for (int j = 1; j <= 9; j++) {
		se.clear();
		for (int i = 1; i <= 9; i++) {
			se.insert(arr[i][j]);
			if (se.size() != 9) {
				cout << "0" << endl;
				return 0;
			}
		}
	}
	cout << 1 << endl;
	
	return 0;
}
/*
1
2
3
4
5
6
7
8
9
45
*/