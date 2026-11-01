#include<bits/stdc++.h>
using namespace std;
bool issmart(string str) {
	int size = str.size();
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u')
			count++;
	}
	return size % 2 == 0 || count % 2 == 1;
}
vector<string> vv;

int main() {
	string str;
	getline(cin, str);
	int size = str.size();
	string word;
	for (int i = 0; i < size; i++) {
		if (str[i] == ' ') {
			if (!word.empty()) {
				vv.push_back(word);
				word.clear();
			}
		}
		else {
			word += str[i];
		}
	}
	if (!word.empty()) {
		vv.push_back(word);
	}
	int num = vv.size();
	string smma = "";
	string stma = "";
	vector<string> smart;
	vector<string> stupid;
	for (int i = 0; i < num; i++) {
		if (issmart(vv[i])) {
			smart.push_back(vv[i]);
			if (vv[i].size() > smma.size() || (vv[i].size() == smma.size() && vv[i] < smma))
				smma = vv[i];
		}
		else {
			stupid.push_back(vv[i]);
			if (vv[i].size() > stma.size() || (vv[i].size() == stma.size() && vv[i] < stma))
			//	if(vv[i].size() == stma.size() && vv[i] < smma)
				stma = vv[i];
		}
	}
	cout << smart.size() << endl;
	cout << stupid.size() << endl;
	if (!smart.empty()) {
		cout << smma << endl;
	}
	else {
		cout << "None" << endl;
	}
	if (!stupid.empty()) {
		cout << stma << endl;
	}
	else {
		cout << "None" << endl;
	}

	return 0;
}