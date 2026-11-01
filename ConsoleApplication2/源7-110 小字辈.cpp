//#include<bits/stdc++.h>
//using namespace std;
//
//int n;
//vector<int> ans;
//vector<int> vec[100005];
//int mdeep = 1;
//void dfs(int x, int deep)
//{
//	if (deep == mdeep) {
//		ans.push_back(x);
//	}
//	else if (deep > mdeep) {
//		mdeep = deep;
//		ans.clear();
//		ans.push_back(x);
//	}
//	int num = vec[x].size();
//	for (int i = 0; i < num; i++) {
//		dfs(vec[x][i], deep + 1);
//	}
//}
//int main()
//{
//	cin >> n;
//	int s;
//	for (int i = 1; i <= n; i++) {
//		int c;
//		cin >> c;
//		if (c == -1) {
//			s = i;
//		}
//		else {
//			vec[c].push_back(i);
//		}
//	}
//	
//	dfs(s, 1);
//	sort(ans.begin(), ans.end());
//	cout << mdeep << endl;
//	for (int i = 0; i < ans.size(); i++) {
//		if (i != 0)cout << " ";
//		cout << ans[i];
//	}
//	return 0;
//}
