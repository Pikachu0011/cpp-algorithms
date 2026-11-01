//#include<bits/stdc++.h>
//#include<sstream>
//
//using namespace std;
//typedef pair<string, string> pss;
//typedef pair<string, int> psi;
//
//vector<string> keys;
//vector<string> val;
//int main() {
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//
//	stringstream ss1(s1);
//	string temp;
//	while (ss1 >> temp) {
//		keys.push_back(temp);
//	}
//	stringstream ss2(s2);
//	while (ss2 >> temp) {
//		val.push_back(temp);
//	}
//	vector<psi> mp;
//	for (int i = 0; i < keys.size(); i++) {
//		mp.push_back({ keys[i],i });
//	}
//	sort(mp.begin(), mp.end());
//	cout << "[";
//	bool flag = 1;
//	for (int i = 0; i < mp.size(); i++) {
//		if (!flag)cout << ",";
//		flag = 0;
//		cout << "('" << mp[i].first <<"'" << ",' " << val[mp[i].second] <<"'" << ")";
//	}
//	cout << "]";
//
//	return 0;
//}