#include<bits/stdc++.h>
using namespace std;
struct person {
	string name;
	string bir;
	string hua;
	int age;
};
person stu[10];
bool cmp(person a, person b) {
	return a.age > b.age;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].bir >> stu[i].hua;
		stu[i].age = 20000000 - stoi(stu[i].bir);
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << stu[i].name << " " << stu[i].bir << " " << stu[i].hua << endl;
	}
	return 0;
}