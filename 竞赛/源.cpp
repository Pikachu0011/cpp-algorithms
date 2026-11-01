#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int arr[N];
int sum[N];//前缀和数组
int get_sum(int* sum, int l, int r) {
	if (l == 0)
		return sum[r];
	else {
		return sum[r] - sum[l - 1];
	}
}
int main() {
	int n;
	long long k;
	cin >> n >> k;


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (i == 0)
			sum[i] = arr[0];
		else {
			sum[i] = sum[i - 1] + arr[i];
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			if (get_sum(sum, i, j) == k) {
				//cout<<i+1<<j+1<<endl; 
				count++;
			}
	}
	cout << count << endl;

	return 0;
}