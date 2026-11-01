#include<bits/stdc++.h>
using namespace std;
int arr[300] = { 0 };
int main() {
	int n, k, s;
	int res = 0;
	
	cin >> n >> k >> s;
	while (n--) {
		int a, b;
		cin >> a >> b;
		if (a>=175 && b >= s)res++;
		else if (a >= 175 && arr[a] < k) {
			res++;
			arr[a]++;
		}
	}
	cout << res << endl;


	return 0;

}