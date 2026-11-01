#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> arr{ 0,1,1,1,8,9,9 };
	//int pos = lower_bound(arr.begin(), arr.end(), 8) - arr.begin();//4
	// pos = upper_bound(arr.begin(), arr.end(), 8) - arr.begin();//5
	//cout << pos << endl;
	reverse(arr.begin()+2, arr.begin()+5);//反转
	//			下标为2			下标为5的前一位
	cout << endl;
	for (auto ele : arr) {s
		cout << ele << endl;
	}
	cout << endl;
	cout << max(1, 2) << endl;
	cout << min({ 1,1,3,4,6,5 }) << endl;
	cout << endl;
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	for (auto ele : arr) {
		cout << ele << endl;
	}

	return 0;
}