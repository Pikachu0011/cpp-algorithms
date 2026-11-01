#include<bits/stdc++.h>
using namespace std;
string arr[105];
int main() {
	int n;
	char c;
	cin >> c >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		
			getline(cin , arr[i]);

		
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == arr[n - 1 - i][n - 1 - j])
				count++;
		}
		
	}
	if (count == pow(n, 2)) {
		cout << "bu yong dao le" << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[n - 1 - i][n - 1 - j] != ' ')
				cout << c;
			else
				cout << ' ';
		}
		cout << endl;
	}

}