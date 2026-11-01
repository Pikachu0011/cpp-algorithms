//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int pos[110][15][15];//i学校第j队伍第k个人的座位
//int g[110];//i学校的队伍数
//set<ll> se;
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> g[i];
//	int num = 1, pre = 0;
//	int i, j, k;
//	for (i = 1; i <= 10; i++) {//队伍
//		for (j = 1; j <= 10; j++) {//队员
//			for (k = 1; k <= n; k++) {//学校
//				if (i > g[k])continue;
//				if (pre != k) {
//					pos[k][i][j] = num;
//					num++;
//					pre = k;
//				}
//				else {
//					pos[k][i][j] = num + 1;
//					num += 2;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << "#" << i << endl;
//		for (int j = 1; j <= g[i]; j++) {
//			for (int k = 1; k <= 10; k++) {
//				if (k != 1)cout << " ";
//				cout << pos[i][j][k];
//			}
//			cout << endl;
//		}
//	}
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}