//#include<bits/stdc++.h>
//using namespace std;
//stack<int> st_he;
//int arr[1005];
//vector<int> ans;
//int n, m, k;
//int main() {
//	cin >> n >> m >> k;//总数 盒子最大量 松枝干最大量
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//
//	}
//	for (int i = 1; i <= n; i++) {
//		if (ans.empty() && st_he.empty()) {
//			ans.push_back(arr[i]);
//
//		}
//		else {
//			if (ans.size() == k) {
//				for (int i = 0; i < k; i++) {
//					if (i != 0)cout << " ";
//					cout << ans[i];
//				}
//				cout << endl;
//				ans.clear();
//			}
//			if (ans.empty()) {
//				
//				ans.push_back(st_he.top());
//				st_he.pop();
//				while (ans[ans.size() - 1] <= st_he.top()) {
//					ans.push_back(st_he.top());
//					st_he.pop();
//					if (ans.size() == k) {
//						for (int i = 0; i < k; i++) {
//							if (i != 0)cout << " ";
//							cout << ans[i];
//						}
//						cout << endl;
//						ans.clear();
//					}
//				}
//
//			}
//			else {
//				if()
//			}
//
//
//		}
//	}
//
//	return 0;
//}