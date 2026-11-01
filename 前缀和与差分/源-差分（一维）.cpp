#include<bits/stdc++.h>
using namespace std;
void cha(int* d, int l, int r,int v) {
	d[l] += v;
	d[r + 1] -= v;
	
}
int main() {

	int arr[5] = { 1,3,7,5,2 };
	/*
	n个数arr
	m个操作[l,r]+v//
	[2,4]+5 <=>d[l]+v,d[r+1]-v
	[1,3]+2
	[0,2]-3
	1次询问

	*/
	//降低了时间复杂度
	int d[6] = { 0 };//差分数组
	
	for (int i = 0; i < 5; i++) {
		if (i == 0)
			d[i] = arr[0];
		else
			d[i] = arr[i] - arr[i - 1];

	}
	for (int i = 0; i < 5; i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	cha(d, 2, 4, 5);
	
	cha(d, 1, 3, 2);
	
	cha(d, 0, 2, -3);
	
	for (int i = 0; i < 5; i++) {
		if (i == 0)
			arr[i] = d[0];
		else
			arr[i] = arr[i - 1] + d[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
/*
1 2 3 4 5 6 7 8 
1 1 1 1 1 1 1 1 
1 2 3 4 5 6 7 8
*/