#include<bits/stdc++.h>
using namespace std;
int main() {
	map<int, int> mp;
	mp[2] = 1;
	cout << mp[2] << endl;
	mp.erase(2);//删除
	mp[2] = 3;
	cout << mp.count(2) << endl;//查找||（数量）
	cout << mp.size() << endl;//查看大小

	mp.clear();//清空

	cout << mp.empty() << endl;//判空

	if (mp.find(2) != mp.end()) {//find()查找键是否存在。
		cout << "yes" << endl;

	}
	else {
		cout << "no" << endl;


	}

	mp[0] = 3;
	mp[1] = 4;
	mp[3] = 5;
	mp[2] = 2;
	mp[999] = 666;
	for (map<int, int >::iterator it = mp.begin(); it != mp.end(); it++)
		cout << it->first << "  " << it->second << endl;

	for (auto pr : mp) {
		cout << pr.first << " " << pr.second << endl;
	}
	map<string, int> mp1;
	vector<string> word;
	word.push_back("awa");
	word.push_back("awa");
	word.push_back("awa");
	word.push_back("awa");
	word.push_back("bwb");
	word.push_back("bwb");
	word.push_back("awb");
	word.push_back("awb");
	for (int i = 0; i < word.size(); i++) {
		mp1[word[i]]++;

	}
	for (auto pr : mp1) {
		cout << pr.first << " " << pr.second << endl;

	}




	return 0;
}