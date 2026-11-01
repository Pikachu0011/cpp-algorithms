#include<bits/stdc++.h>
using namespace std;
struct s {
	string name;
	
	int a;
};

bool cmp(s a, s b) {
	if (a.a != b.a) {
		return a.a > b.a;
	}
	return a.name > b.name;
}

int main() {
	int n;
	cin >> n;
	vector<s> stu(n);
	for (int i = 0; i < n; i++) {
		int a1, a2, a3;
		cin >> stu[i].name >> a1 >> a2 >> a3;
		stu[i].a = 4 * a1 + 3 * a2 + 3 * a3;
		
	}
	sort(stu.begin(), stu.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << stu[i].a << " " << stu[i].name << endl;
	}
	return 0;
}