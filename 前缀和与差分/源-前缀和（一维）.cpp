#include<bits/stdc++.h>
using namespace std;
int get_sum(int* sum, int l, int r) {
	if (l == 0)
		return sum[r];
	else {
		return sum[r] - sum[l - 1];
	}
}
int main() {
	int arr[5] = { 1,3,7,5,2 };//求下标【l,r】元素的和。
	int sum[5];//前缀和数组
	for (int i = 0; i < 5; i++) {
		if (i == 0)
			sum[i] = arr[0];
		else {
			sum[i] = sum[i - 1] + arr[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << sum[i] << " ";

	}
	cout << endl;
	cout << get_sum(sum, 2, 4) << endl;
	cout << get_sum(sum, 0, 3) << endl;
	cout << get_sum(sum, 3, 4) << endl;



	return 0;
}