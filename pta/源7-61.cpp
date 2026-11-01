#include<bits/stdc++.h>
using namespace std;
int main() {

	int a1, a2, a3, a4, xiao, yu;
	cin >> a1 >> a2 >> a3 >> a4 >> xiao >> yu;
	int maxx = max({ a1,a2,a3,a4 });
	if (maxx <= a1 + yu && maxx <= a2 + yu && maxx <= a3 + yu && maxx <= a4 + yu && a1 >= xiao && a2 >= xiao && a3 >= xiao && a4 >= xiao) {
		cout << "Normal" << endl;
		return 0;
	}
		
	int count=0;
	int flag;
	if (maxx - a1 > yu || a1 < xiao) {
		count++;
		
	}
	if (maxx - a2 > yu || a2 < xiao) {
		count++;
		
	}
	if (maxx - a3 > yu || a3 < xiao) {
		count++;
		
	}
	if (maxx - a4 > yu || a4 < xiao) {
		count++;
		
	}
	if (count >= 2) {
		cout << "Warning: please check all the tires!" << endl;
		return 0;
	}
	if (maxx - a1 > yu || a1 < xiao) {
		flag = 1;

	}
	if (maxx - a2 > yu || a2 < xiao) {
		flag = 2;

	}
	if (maxx - a3 > yu || a3 < xiao) {
		flag = 3;

	}
	if (maxx - a4 > yu || a4 < xiao) {
		flag = 4;

	}
	cout << "Warning: please check #" << flag << "!";



	return 0;
}