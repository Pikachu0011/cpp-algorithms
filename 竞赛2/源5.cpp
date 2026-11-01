//#include<bits/stdc++.h>
//using namespace std;
//string min_str;
//
//string new_str;
//void minn(vector<string>& ss, vector<bool>& used) {
//	if (new_str .size() ==min_str.size() ) {
//		if (new_str < min_str) {
//			min_str = new_str;
//		}
//	}
//	for (int i = 0; i < ss.size(); i++) {
//		if (used[i] == true) {
//			continue;
//		}
//		used[i] = true;
//		new_str += ss[i];
//		minn(ss, used);
//		used[i] = false;
//		auto pos = ss[i].find(ss[i]);
//		new_str.erase(pos, ss[i].size());
//	}
//}
//
//int main() {
//	vector < bool > used = { 0,0,0,0 };
//	vector<string> ss;
//	for (int i = 1; i <= 4; i++) {
//		//vector < bool > used = { 0,0,0,0 };
//		//vector<string> ss;
//		
//		string temp;
//		cin >> temp;
//		ss.push_back(temp);
//
//	}
//	min_str = ss[0] + ss[1] + ss[2] + ss[3];
//	minn(ss, used);
//	cout << min_str << endl;
//	return 0;
//}