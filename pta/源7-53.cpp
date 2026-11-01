#include<bits/stdc++.h>
using namespace std;
int main() {

	string arr[105];
	char c;
	int n;
	cin >> c >> n;
	getchar();
	int count = 0;


	for (int i = 0; i < n; i++) {
		
			getline(cin, arr[i]);
		
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == arr[n - i - 1][n - j - 1]) {
				count++;
			}
				
			
		}
		
	}
	if (count == pow(n, 2)) {
		cout << "bu yong dao le" << endl;
	}

	for (int i = n-1; i >= 0; i--) {
		for (int j = n-1 ; j >= 0; j--) {
			if (arr[i][j] != ' ')
				arr[i][j] = c;
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}