//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//set<ll> se;
//int n;
//string s1, s2;
//void solve() {
//	cin >> s1 >> s2;
//	int preflag, flag;
//	if (s1[0] == s2[0] && s1[0] == '.')preflag = 0;
//	else if (s1[0] == s2[0] && s1[0] == '#')preflag = 3;
//	else if (s1[0] != s2[0] && s1[0] == '#')preflag = 1;
//	else if (s1[0] != s2[0] && s1[0] == '.')preflag = 2;
//	int chu = -1;
//	int i, j, pre;
//	int ans = 0;
//	for (int k = 0; k < s1.size(); k++) {
//		if (s1[k] == s2[k] && s1[k] == '.') {
//			continue;
//		}
//		//else if (preflag != 0)chu = 0;
//		else {
//			chu = pre = k;
//			if (s1[k] == s2[k] && s1[k] == '.')preflag = 0;
//			else if (s1[k] == s2[k] && s1[k] == '#')preflag = 3;
//			else if (s1[k] != s2[k] && s1[k] == '#')preflag = 1;
//			else if (s1[k] != s2[k] && s1[k] == '.')preflag = 2;
//		}
//		if (chu != -1) {
//			for (i = pre + 1; i < s1.size(); i++) {
//				if (s1[i] == '#' || s2[i] == '#') {
//					j = i;
//					if (s1[j] == s2[j] && s1[j] == '.')flag = 0;
//					else if (s1[j] == s2[j] && s1[j] == '#')flag = 3;
//					else if (s1[j] != s2[j] && s1[j] == '#')flag = 1;
//					else if (s1[j] != s2[j] && s1[j] == '.')flag = 2;
//					break;
//				}
//			}
//			//cout << pre << " " << j << " " << preflag <<" "<< flag << endl;
//			if (preflag == flag)ans += max(0, j - pre - 1);
//			else if (preflag == 3 || flag == 3)ans += max(0, j - pre - 1);
//			else ans += (j - k);
//			//cout << ans << endl;
//			k = pre;
//			preflag = flag;
//		}
//	}
//	//if (j != s1.size() - 1)ans += (s1.size() - 1 - j);
//	cout << ans << endl;
//}
///*
//.#.#.#.#....#...
//................
//*/
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}