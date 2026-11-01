#include<bits/stdc++.h>
using namespace std;

struct Student {
	string name;
	int score;

};
bool cmp(Student x, Student y) {
	return x.score > y.score;
}
int main() {
	Student stu[3];
	
	for (int i = 0; i < 3; i++) {
		string s;
		int n;
		cin >> s >> n;
		stu[i].name = s;
		stu[i].score = n;

	}
	sort(stu, stu + 3, cmp);
	for (int i = 0; i < 3; i++) {
		cout << stu[i].name << " " << stu[i].score << endl;
	}



	return 0;
}