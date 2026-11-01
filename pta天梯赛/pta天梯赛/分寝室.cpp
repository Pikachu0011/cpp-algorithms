//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//void solve() {
//	int n0, n1, n;//女 男 
//	int maxabs = 1e9;
//	int ans_0, ans_1;
//	cin >> n0 >> n1 >> n;
//	if (n0 && n1 && n < 2) {
//		cout << "No Solution\n";
//		return;
//	}
//	//bool flag = 1;
//	for (int i = 1; i <= n - 1; i++) {//男寝数
//		if (n1 % i == 0 && n1 != i) {
//			int j = n - i;//女寝数
//			if (j != 0 && n0 % j == 0 && n0 != j) {
//				maxabs = min(maxabs, abs(i - j));
//				ans_0 = j, ans_1 = i;
//				//flag 
//			}
//		}
//
//	}
//	if (maxabs == 1e9) {
//		cout << "No Solution\n";
//	}
//	else {
//		cout << ans_0 << " " << ans_1 << endl;
//	}
//}
//int main() {
//	solve();
//
//
//
//	return 0;
//}
