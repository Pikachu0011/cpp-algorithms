#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
LL dp[4];
int main() {
	for (int i = 1; i <= 2023; i++)
	{
		s += to_string(i);
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '2') {
			dp[0]++;
			dp[2] += dp[1];
		}
		else if (s[i] == '0') {
			dp[1] += dp[0];
		}
		else if (s[i] == '3') {
			dp[3] += dp[2];
		}
	}
	cout << dp[3];

	return 0;
}
