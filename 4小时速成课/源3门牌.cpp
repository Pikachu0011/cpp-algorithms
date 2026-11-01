#include<bits/stdc++.h>
using namespace std;
int main() {
	int index[10] = { 0 };
	for (int i = 1; i <= 2020; i++) {
		string s = to_string(i);
		for (int j = 0; j < s.size(); j++) {
			index[s[j] - '0']++;

		}
	}
	cout << index[2];

	return 0;
}