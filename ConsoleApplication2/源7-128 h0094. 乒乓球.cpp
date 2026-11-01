#include<bits/stdc++.h>
using namespace std;
int count_W = 0;
int count_L = 0;
string str;
int main() {
	getline(cin, str, 'E');
	//cout << str << endl;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'W')
			count_W++;
		else if (str[i] == 'L')
			count_L++;
		if ((count_W >= 11 || count_L >= 11) && abs(count_L-count_W) >= 2) {
			cout << count_W << ":" << count_L << endl;
			count_W = 0;
			count_L = 0;
		}
		if ((count_W != 0 || count_L != 0) && i==str.size() - 1) {
			cout << count_W << ":" << count_L << endl;
			count_W = 0;
			count_L = 0;
		}
	}
	cout << endl;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'W')
			count_W++;
		else if (str[i] == 'L')
			count_L++;
		if ((count_W >= 21 || count_L >= 21) && abs(count_L - count_W) >= 2) {
			cout << count_W << ":" << count_L << endl;
			count_W = 0;
			count_L = 0;
		}
		if ((count_W != 0 || count_L != 0) && i == str.size() - 1) {
			cout << count_W << ":" << count_L << endl;
			count_W = 0;
			count_L = 0;
		}
	}
	return 0;
}