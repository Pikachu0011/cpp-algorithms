#include<bits/stdc++.h>
using namespace std;
vector<int> vv = { 0,1,2,3,3,0,4,2 };//É¾³ý2
int main() {
	int val = 2;
	int size = vv.size();
	int showindex = 0;
	for (int fastindex = 0; fastindex < size; fastindex++) {
		if (vv[fastindex] != val) {
			vv[showindex++] = vv[fastindex];
			
		}
	}
	cout << showindex << endl;
	/*for (auto& k : vv) {
		cout << k << " ";
	}*/


	return 0;
}