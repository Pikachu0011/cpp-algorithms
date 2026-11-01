#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	/*cin >> str1;
	cin >> str2;*/
	while (cin >> str1 >> str2) {
		int size1 = str1.size();
		int size2 = str2.size();
		int maxx_len = 2 * max(size1, size2);
		char ans = '=';
		for (int i = 0; i < maxx_len; i++) {
			char c1 = str1[i % size1];
			char c2 = str2[i % size2];
			if (c1 > c2) {
				ans = '>';
				break;
			}
			
			else if (c1 < c2) {
				ans = '<';
				break;
			}
				

		}
		cout << ans << endl;

	}
	
	return 0;
}
