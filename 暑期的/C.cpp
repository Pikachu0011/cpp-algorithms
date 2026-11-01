//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	int d;
//	char c;
//	string l;
//	int f;
//	int b;
//	cin >> d >> c >> l >> f >> b;
//	int S = 0;
//	if (c == 'Z') {
//		cout << 0 << endl;
//		return;
//	}
//	int B = max(d, 500);
//	if (c == 'F')S = B * 2.0;
//	else if (c == 'C')S = B * 1.5;
//	else if (c == 'Y') S = B * 1.0;
//	else if (c == 'D') S = B * 0.5;
//	if (l == "Platinum") S = S * 1.5;
//	else if (l == "Gold")S = S * 1.25;
//	else if (l == "Silver")S = S * 1.10;
//	else if (l == "Normal")S = S;
//	if (c == 'F')S = S + 200;
//	if (l == "Platinum")S = min(S, 15000);
//	else S = min(S, 10000);
//	if (f == b)S = S + 500;
//	cout << S << endl;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--)solve();
//	return 0;
//}