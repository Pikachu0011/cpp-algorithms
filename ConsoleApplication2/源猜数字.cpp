#include<bits/stdc++.h>
using namespace std;
struct stu {
	string name;
	int num;
};
int sum = 0;
stu arr[10005];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].name >> arr[i].num;
		sum += arr[i].num;
	}
	int ave = sum / n;
	string won = arr[0].name;
	int minn = abs(arr[0].num - ave/2);


	for (int i = 0; i < n; i++) {
		if (abs(arr[i].num - ave/2) < minn) {
			minn = abs(arr[i].num - ave/2);
			won = arr[i].name;

		}
	}
	cout << ave / 2 << " " << won << endl;
	return 0;
}