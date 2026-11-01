#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int k, n, w;
	cin >> k >> n >> w;
	
	
	long long av = (1 + w) * w / 2;
	long long sum = av * k;
	
	if (n >= sum)
		cout << 0 << endl;
	else
		cout << sum - n;
	return 0;
}