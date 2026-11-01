#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;
		
			int sum1, sum2;
			sum1 = (str[0] - '0') + (str[1] - '0') + (str[2] - '0');
			sum2 = (str[3] - '0') + (str[4] - '0') + (str[5] - '0');
			if (sum1 == sum2) {
				cout << "You are lucky!" << endl;
			}
			else {
				cout << "Wish you good luck." << endl;
			}

		
	}



	return 0;

}