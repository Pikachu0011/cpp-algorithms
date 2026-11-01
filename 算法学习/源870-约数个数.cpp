#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long LL;
const int mod = 1e9 + 7;
int n;

int main() {
	cin >> n;
	unordered_map<int, int> hash;
	while (n--) {
		int x;
		cin >> x;
		for (int i = 2; i <= x / i; i++) {
			while (x % i == 0) {
				x /= i;
				hash[i]++;
			}
		}
		if (x > 1)hash[x]++;
	}
	LL res = 1;
	for (auto i : hash) {
		res = res * (i.second + 1) % mod;
	}
	cout << res << endl;


	return 0;
}