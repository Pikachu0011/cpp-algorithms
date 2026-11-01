#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int arr[N];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	long long res = 0;
	for (int i = 0; i < n; i++)res += arr[i];
	cout << res << endl;
	return 0;
}