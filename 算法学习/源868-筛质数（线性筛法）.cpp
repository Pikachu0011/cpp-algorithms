//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1000010;
//int n;
//int prime[N];
//bool vt[N];
//int cnt;
//void solve(int n) {
//	for (int i = 2; i <= n; i++){
//	
//		if(!vt[i])prime[cnt++] = i;
//		for (int j = 0; prime[j] <= n / i; j++) {
//			vt[prime[j] * i] = 1;
//			if (i % prime[j] == 0)break;
//		}
//	}
//	cout << cnt << endl;
//}
//int main() {
//	cin >> n;
//	solve(n);
//
//
//	return 0;
//}