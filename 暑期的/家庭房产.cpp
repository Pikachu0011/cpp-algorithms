//#include<bits/stdc++.h>
//using namespace std;
//typedef long long int;
//const int N = 1010;
//int n;
//map<string, pair<string, int>> mp;//id 上级 集合人数
//map<string, double> mj;//存面积
//map<string, double> tao;//存房产套数
//int ans = 0;
//string find(string x) {
//	if (x == "-1") {
//		return "";
//	}
//	if (mp.count(x) == 0) {
//		ans++;
//		mp[x].first = x, mp[x].second = 1;
//	}
//	if (mp[x].first != x) {
//		mp[x].first = find(mp[x].first);
//	}
//	return mp[x].first;
//}
//void merge(string a, string b) {
//	if (a == "-1" || b == "-1")return;
//	string fa = find(a);
//	string fb = find(b);
//	if (fa != fb) {
//		if (fa < fb) {
//			mp[fb].first = fa;
//			mp[fa].second += mp[fb].second;
//			mp[fb].second = 0;
//		}
//		if (fa > fb) {
//			mp[fa].first = fb;
//			mp[fb].second += mp[fa].second;
//			mp[fa].second = 0;
//		}
//		ans--;
//	}
//}
//bool cmp(string a, string b) {
//	if (mj[a] / mp[a].second != mj[b] / mp[b].second) {
//		return mj[a] / mp[a].second > mj[b] / mp[b].second;
//	}
//	return a < b;
//}
//int main() {
//	cin >> n;
//	vector<string> per;//存储每一个家族
//	for (int i = 0; i < n; i++) {
//		string id, da, mo;
//		cin >> id >> da >> mo;
//		if (da != "-1")merge(id, da);
//		if (mo != "-1")merge(id, mo);
//		find(id);//实现id的上级是id；
//		int k;
//		cin >> k;
//		for (int j = 0; j < k; j++) {
//			string child;
//			cin >> child;
//			merge(id, child);
//		}
//		int area, numm;
//		cin >> numm >> area;
//		mj[id] += area;
//		tao[id] += numm;
//	}
//	//合并家庭
//	for (auto it : mp) {
//		string fit = find(it.first);
//		if (fit == it.first) {
//			per.push_back(fit);
//		}
//		else {
//			mj[fit] += mj[it.first];
//			mj[it.first] = 0;
//			tao[fit] += tao[it.first];
//			tao[it.first] = 0;
//		}
//	}
//	cout << ans << endl;
//	sort(per.begin(), per.end(), cmp);
//	for (int i = 0; i < per.size(); i++) {
//		string id = per[i];
//		cout << id << " " << mp[id].second << " ";
//		printf("%.3f ", tao[id] / mp[id].second);
//		printf("%.3f\n", mj[id] / mp[id].second);
//	}
//
//	return 0;
//}