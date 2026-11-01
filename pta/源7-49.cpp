#include<bits/stdc++.h>
using namespace std;
int main() {

	int ra, ca;
	cin >> ra >> ca;

	int a[100][100];
	for (int i = 0; i < ra; i++) {
		for (int j = 0; j < ca; j++) {
			cin >> a[i][j];

		}
	}
	int rb, cb;
	cin >> rb >> cb;

	int b[100][100];
	for (int i = 0; i < rb; i++) {
		for (int j = 0; j < cb; j++) {
			cin >> b[i][j];

		}
	}
	int c[100][100];
	int sum = 0;
	if (ca != rb) {
		printf("Error: %d != %d", ca, rb);
	}
	else {
		cout << ra << " " << cb << endl;
		for (int i = 0; i < ra; i++) {
			for (int j = 0; j < cb; j++) {
				for (int k = 0; k < ca; k++) {
					sum = sum + a[i][k] * b[k][j];

				}
				c[i][j] = sum;
				sum = 0;
			}
		}
		for (int i = 0; i < ra; i++) {
			for (int j = 0; j < cb; j++) {
				cout << c[i][j];
				if (j != cb - 1)
					cout << " ";
			}
			cout << endl;
		}
	}



	return 0;

}