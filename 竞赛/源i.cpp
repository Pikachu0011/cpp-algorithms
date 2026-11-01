#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int date[105];
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> date[i];
	}
	for (int i = 1; i <= n; i++) {
		  //cout << i << endl;
			if (i >= 10 && (i % 10 != i / 10)) {
				continue;
			}
			//cout << i << endl;
		
		for (int j = 0; j < date[i]; j++) {
			if (j + 1 < 10) {
				if (j + 1 == i% 10) {
					//cout << i  << " " << j+1 << endl;
					sum++;
				}
					
			}
			else {
				if (i % 10== (j + 1) % 10 && i % 10 == (j + 1) / 10) {
					//cout << i << " " << j+1 << endl;
					sum++;
				}
					
			}
		}
	}
	
	
	cout << sum << endl;

	return 0;
}