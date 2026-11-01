#include<bits/stdc++.h>
using namespace std;
char arr[10][10];
int main() {
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			cin >> arr[i][j];
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++) {
			if (arr[i][j] == '*') {
				if (j == 1)
					cout << "a";
				else if (j == 2)
					cout << "b";
				else if (j == 3)
					cout << "c";
				else if (j == 4)
					cout << "d";
				else if (j == 5)
					cout << "e";
				else if (j == 6)
					cout << "f";
				else if (j == 7)
					cout << "g";
				else if (j == 8)
					cout << "h";
				cout << 9 - i;
			}
		}
			
	return 0;
}