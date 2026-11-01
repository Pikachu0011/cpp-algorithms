//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
////int dist[N];
////int vt[N];
////int arr[N][N];
////int n, m;
//void solve() {
//	//cout << 1111 << endl;
//	//cout << "Building the Future, One Line of Code at a Time.";
//	int n;
//	cin >> n;
//
//	map<int, int>mp1;
//	//map<int, int>mp0;
//	set<int> se;
//	while (n--) {
//		int a, b;
//		cin >> a >> b;
//		if (b == 1) {
//			mp1[a] = 1;
//		}
//		se.insert(a);
//	}
//	int cnt = 0;
//	bool flag = 0;
//	for (auto i : se) {
//		if (mp1[i] == 0) {
//			if (flag)cout << " ";
//			else flag = 1;
//			cout << i;
//		}
//	}
//	if (flag == 0)cout << "NONE\n";
//}
//int main() {
//	solve();
//	return 0;
//}
