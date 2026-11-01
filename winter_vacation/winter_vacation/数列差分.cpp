//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//
//set<ll> se;
//vector<int> a, b;
//int n;
//void solve() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		a.push_back(x);
//	}
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		b.push_back(x);
//	}
//	sort(a.begin(),a.end());
//	sort(b.begin(),b.end());
//	int i = 0, j = 0;
//	while (i < n && j < n) {
//		if (a[i] > b[j]) {
//			i++;
//			j++;
//		}
//		else {
//			i++;
//		}
//	}
//	cout << n - j;
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//
//
//
//	return 0;
//}