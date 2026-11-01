#include<bits/stdc++.h>
using namespace std;
struct person {
	string name;
	int num;
	double ave;
};
bool cmp(person a, person b) {
	if (a.num == b.num)return a.ave < b.ave;
	return a.num > b.num;
}
vector<person> ans;
int main() {
	int n;
	cin >> n;
	while (n--) {
		person a;
		cin >> a.name;
		int num;
		cin >> num;
		int temp = num;
		set<int> se;
		while (num--) {
			int temp;
			cin >> temp;
			se.insert(temp);
		}
		a.num = se.size();
		a.ave = (double)temp / se.size();
		ans.push_back(a);

	}
	sort(ans.begin(), ans.end(), cmp);
	int size = ans.size();
	for (int i = 0; i < 3; i++) {
		if (i != 0)cout << " ";
		if (i >= size)cout << "-";	
		else cout << ans[i].name;
	}
	return 0;
}