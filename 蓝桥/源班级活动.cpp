//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int a[N];
//map<int, int> mp;
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int x;
//		scanf("%d", &x);
//		mp[x]++;
//	}
//	int ans1 = 0, ans3 = 0;
//	for (auto i : mp) {
//		if (i.second == 2)continue;
//		if (i.second == 1)ans1++;
//		if (i.second > 2) {
//			int v = i.second - 2;
//			ans3 += v;
//		}
//
//	}
//	if (ans3 > ans1)cout << ans3;
//	else {
//		cout << ans3 + (ans1 - ans3) / 2;
//	}
//	
//	
//
//	return 0;
//}