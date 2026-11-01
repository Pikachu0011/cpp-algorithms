#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	long long p = llabs(n);
	int count = 1;
	int count_2 = 0;
	while (p >= 10) {
		count++;
		
		long long temp= p / 10;

		if (temp == 2) {
			count_2++;
		}
		if (p % temp == 2)
			count_2++;
		p /= 10;
	}
	if (llabs(n) / pow(10, count-1) == 2)
		count_2++;
	if (llabs(n) == 22) {
		count_2 = 2;
	}
	//cout << count << endl << count_2;
	
	double degree =100 * (double)count_2 / (double)count;
	
	if (n % 2 == 0)
		degree *= 2;
	if (n < 0) {
		degree *= 1.5;
		
	}
	printf("%.2lf", degree);
	cout << "%" << endl;
	
	return 0;
}