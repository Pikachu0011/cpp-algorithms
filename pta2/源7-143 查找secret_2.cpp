#include<bits/stdc++.h>
using namespace std;
int main() {
	string s, str;
	int cnt = 0;
	getline(cin, s);
	stringstream ss(s);//将s拆后存到ss里面
	vector<int> ve;
	bool flag = 0;
	while (ss >> str) {//遍历ss每个元素赋值给str
		cnt++;
		if (str == "secret") {
			flag = 1;
			ve.push_back(cnt);
		}


	}
	if (flag) {
		for (auto i : ve) {
			cout << "\"secret\" is pos " << i << endl;
		}
	}
	else {
		cout << "No \"secret\"" << endl;
	}

	return 0;
}