//#include<bits/stdc++.h>
//using namespace std;
//vector<int> tt;
//vector<int> ans;
//
//const int N = 1e4 + 5;
//vector<int> arr[N];
//bool vt[N];
//int n;
//int mi = 0, mdeep = 0;
//void dfs(int di, int deep) {
//	
//
//	if (deep > mdeep) {
//		ans = tt;
//		
//		mdeep = deep;
//		mi = di;
//	}
//	for (int i = 0; i < arr[di].size(); i++) {
//		tt.push_back(arr[di][i]);
//		dfs(arr[di][i], deep + 1);
//		tt.pop_back();
//	}
//	
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int num;
//		cin >> num;
//		for (int j = 0; j < num; j++) {
//			int temp;
//			cin >> temp;
//			arr[i].push_back(temp);
//			vt[temp] = 1;
//		}
//		sort(arr[i].begin(), arr[i].end());
//	}
//	int s = 0;
//	for (int i = 0; i < n; i++) {
//		if (vt[i] == 0)
//			s = i;
//	}
//	dfs(s, 0);
//	cout << mdeep + 1 << endl;
//	cout << s ;
//	for (int i = 0; i < ans.size(); i++) {
//		
//		cout <<" " << ans[i];
//	}
//	cout << endl;
//	return 0;
//}