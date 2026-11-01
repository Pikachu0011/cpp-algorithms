#include<bits/stdc++.h>
using namespace std;
struct person {
	string name;
	int num;
};
bool cmp(person a, person b) {
	return a.name < b.name;
}
double sum = 0;
double ave;
set<string> se;
vector<person> ve;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string t;
		cin >> t;
		se.insert(t);
	}
	int m;
	cin >> m;
	int mt = m;
	while (mt--) {
		person t;
		cin >> t.name >> t.num;
		ve.push_back(t);
		sum += (double)t.num;

	}
	ave = sum / (1.0 * m);
	sort(ve.begin(), ve.end(), cmp);
	bool flag = 0;
	for (int i = 0; i < m; i++) {
		if (ve[i].num > ave && se.count(ve[i].name) == 0) {
			flag = 1;
			cout << ve[i].name << endl;
		}
	}
	if (!flag) {
		cout << "Bing Mei You" << endl;
	}
	return 0;
}