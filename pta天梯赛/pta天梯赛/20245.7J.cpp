//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10,MOD = 1e9 + 7;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int a[N], b[N];
//ll qpow(ll a, ll b) {
//	ll res = 1;
//	while (b) {
//		if (b & 1)res = res * a % MOD;
//		a = a * a % MOD;
//		b >>= 1;
//	}
//	return res;
//}
//void solve() {
//	int n;
//	cin >> n;
//	ll inv9 = 111111112;
//	while (n--) {
//		int m;
//		cin >> m;
//		int arr[10];
//		//priority_queue<int,>
//		for (int i = 0; i < 10; i++) {
//			cin >> arr[i];
//		}
//		int cnt = 0;//目前的位数
//		ll now = 0;
//		//bool flag1 = 0;
//		if (m == 1) {
//			for (int i = 0; i < 10; i++) {
//				if (arr[i] != 0) {
//					cout << i << endl;
//					//flag1 = 1;
//					break;
//				}
//			}
//		}
//		else {
//			for (int i = 1; i < 10; i++) {
//				if (arr[i] != 0) {
//					now += i;
//					arr[i]--;
//					cnt++;
//					break;
//				}
//			}
//			for (int i = 0; i < 10 && cnt < m; i++) {
//				int use = min(arr[i], m - cnt); 
//				ll p10 = qpow(10, use);
//				ll sum = (p10 - 1 + MOD) % MOD * inv9 % MOD;
//				now = now * p10 % MOD;
//				now = (now + (ll)i * sum) % MOD;
//				cnt += use;
//			}
//			cout << now << endl;
//		}
//	}
//}
//int main() {
//	int t;
//	//cin >> t;
//	t = 1;
//	while(t--)solve();
//	return 0;
//}
///*
//2^31
//2e9
//
//(now * 10 + x) % MOD
//
//3
//3 1 0 0 0 3 0 0 0 0 0
//1 2 0 0 0 0 0 0 0 0 0
//4 0 1 1 1 3 0 0 0 0 0
//*/
