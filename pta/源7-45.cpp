#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<string>arr(1000);
	int i;
	for ( i = 0;; i++) {
		cin >> arr[i];
		if (arr[i] == ".")
			break;
	}
	if (i >= 14) {
		cout << arr[1] << " and " << arr[13] << " are inviting you to dinner...";
		return 0;
	}
		
	if (i > 2) {
		cout << arr[1] << " is the only one for you...";
		return 0;
	}
	else {
		cout << "Momo... No one is for you ..." << endl;
	}

	return 0;
}