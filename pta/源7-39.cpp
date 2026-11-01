#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int count_g = 0;
	int count_p = 0;
	int count_l = 0;
	int count_t = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'g'||s[i]=='G')
			count_g++;
		if (s[i] == 'p' || s[i] == 'P')
			count_p++;
		if (s[i] == 'l' || s[i] == 'L')
			count_l++;
		if (s[i] == 't' || s[i] == 'T')
			count_t++;
		
	}
	int maxx = max(count_g, max(count_p, max(count_l, count_t)));
	for (int i = 1; i <= maxx; i++) {
		if (count_g != 0) {
			cout << "G";
			count_g--;
		}
		if (count_p != 0) {
			cout << "P";
			count_p--;
		}
		if (count_l != 0) {
			cout << "L";
			count_l--;
		}
		if (count_t != 0) {
			cout << "T";
			count_t--;
		}

	}

	return 0;
}
/*
GPLTGPLTGLTGLTGLL
GPLTGPLTGLTGLGLL
*/