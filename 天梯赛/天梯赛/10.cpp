//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int dist[N];
//int vt[N];
//struct node {
//	ll num;
//	ll index;
//};
//node arr[N];
//int n, m;
//bool cmp(node a, node b) {
//	if (a.num != b.num)return a.num < b.num;
//	return a.index < b.index;
//}
//void solve() {
//	cin >> n;
//	ll maxx = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i].num;
//		arr[i].index = i;
//		maxx = max(maxx, arr[i].num);
//	}
//	sort(arr + 1, arr + 1 + n, cmp);
//	bool flag = 0;
//	map<int, int> mp;//Êý ÏÂ±ê
//	for (int i = 1; i <= n; i++) {
//		if (mp[arr[i].num] == 0)mp[arr[i].num] = arr[i].index;
//		if (arr[i].num == maxx) {
//			if (flag)cout << " ";
//			else flag = 1;
//			cout << arr[i].index;
//		}
//	}
//	//for (int i = 1; i <= n; i++) {
//	//	if (mp[arr[i].num] != 0) {
//	//		//mp[arr[i].num] = arr[i].index;
//	//		cout << arr[i].num << " " << mp[arr[i].num] << endl;
//	//	}
//	//}
//	cout << endl;
//	int m;
//	cin >> m;
//	int brr[N];
//	for (int i = 1; i <= n; i++)brr[i] = arr[i].num;
//	while (m--) {
//		int g;
//		cin >> g;
//		auto in = upper_bound(brr, brr + 1 + n, g);
//		//cout << *in << endl;
//		int inde = (int)*in;
//		//cout << inde << endl;
//		if (inde >= 1 && inde <= 1e8) {
//			cout << mp[inde];
//		}
//		else cout <<0;
//		cout << endl;
//
//	}
//
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
