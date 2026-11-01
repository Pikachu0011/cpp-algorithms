//#include<bits/stdc++.h>
//using namespace std;
//vector<int> v;
//int n;
//void solve(int num) {
//	v.push_back(num / 10);
//	v.push_back(num % 10);
//}
//int main() {
//	int t1, t2;
//	cin >> t1 >> t2 >> n;
//	v.push_back(t1);
//	v.push_back(t2);
//	int i = 0;
//	while (v.size() <= n) {
//		int nn = v[i] * v[i + 1];
//		if (nn >= 10)solve(nn);
//		else v.push_back(nn);
//		i++;
//	}
//	for (int i = 0; i < n; i++) {
//		if (i != 0)cout << " ";
//		cout << v[i];
//	}
//
//	return 0;
//}