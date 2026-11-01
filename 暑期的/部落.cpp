//#include<bits/stdc++.h>
//using namespace std;
//const int N = 10010;
//set<int> num;
//int p[N];
//int find(int x) {
//	if(p[x] != x) {
//		p[x] = find(p[x]);
//	}
//	return p[x];
//}
//void merge(int a, int b) {
//	int fa = find(a);
//	int fb = find(b);
//	if (fa != fb) {
//		p[fa] = fb;
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= N - 1; i++)p[i] = i;
//	while (n--) {
//		int k;
//		cin >> k;
//		int f;
//		if (k != 0) {
//			cin >> f;
//			num.insert(f);
//		}
//		for (int i = 1; i < k; i++) {
//			int x;
//			cin >> x;
//			num.insert(x);
//			merge(f, x);
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= num.size(); i++)if (p[i] == i)ans++;
//	cout << num.size() << " " << ans << endl;
//	int q;
//	cin >> q;
//	while (q--) {
//		int a, b;
//		cin >> a >> b;
//		if (find(a) == find(b))cout << "Y\n";
//		else cout << "N\n";
//	}
//
//	return 0;
//}