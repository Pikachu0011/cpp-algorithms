///*
//找到老祖宗s
//从老祖宗开始向下搜索
//记录小辈和深度
//将 最小辈存在ans中
//排序输出
//*/
//#include<bits/stdc++.h>
//using namespace std;
//int n, s;
//const int N = 100010;
//vector<int> ans;
//vector<int> family[N];//存储孩子
//int mdeep;
//void dfs(int x, int deep) {
//	if (deep == mdeep) {
//		ans.push_back(x);
//	}
//	else if (deep > mdeep) {
//		ans.clear();
//		ans.push_back(x);
//		mdeep = deep;
//	}
//	int num = family[x].size();
//	for (int i = 0; i < num; i++) dfs(family[x][i], deep + 1);
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int f;
//		cin >> f;
//		if (f != -1)family[f].push_back(i);
//		else s = i;
//	}
//	dfs(s, 1);
//	cout << mdeep << endl;
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++) {
//		if (i == 0)cout << ans[i];
//		else cout << " " << ans[i];
//	}
//
//	return 0;
//}