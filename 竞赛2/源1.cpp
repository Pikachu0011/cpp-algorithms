#include<bits/stdc++.h>
using namespace std;
int main() {

	for (int i = 2; i <= 2030; i++) {
		int flag = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 1;
				continue;
			}
				

		}
		if (flag == 0) {
			cout << i << endl;
		}
	}
	return 0;
}