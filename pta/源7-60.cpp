#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int i;
	string str[105];
	for ( i = 1; ; i++) {
		getline(cin, str[i]);
		if (str[i] == ".")
			break;

	}
	int temp;
	int count = 0;
	for (int j = 1; ; j++) {
		
		if (str[j] == ".")
			break;
		if (str[j].find("chi1 huo3 guo1") != -1) {
			temp = j;
			break;
		}



	}
	for (int j = 1; ; j++) {

		if (str[j] == ".")
			break;
		if (str[j].find("chi1 huo3 guo1") != -1) {
			count++;
		}



	}
	cout << i - 1 << endl;
	if (count == 0) {
		cout << "-_-#" << endl;
	}
	else {
		cout << temp << " " << count << endl;
	}




	return 0;
}