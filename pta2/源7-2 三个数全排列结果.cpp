//#include<bits/stdc++.h>
//using namespace std;
//vector<int> path;
//void back(vector<int>& nums, vector<int>& used) {
//	if (path.size() == 3) {
//		for (int i = 0; i < path.size(); i++) {
//			if (i != 0)
//				cout << " ";
//			cout << path[i];
//		}
//		cout << endl;
//
//	}
//	for (int i = 0; i < nums.size(); i++) {
//		if (used[i] == true)
//			continue;
//		used[i] = true;
//		path.push_back(nums[i]);
//		back(nums, used);
//		used[i] = false;
//		path.pop_back();
//
//	}
//}
//
//
//int main() {
//
//	vector<int> nums;
//	vector<int> used;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		nums.push_back(i);
//		used.push_back(0);
//	}
//	back(nums, used);
//	return 0;
//}