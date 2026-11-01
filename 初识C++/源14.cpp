#include<iostream>
using namespace std;
int main() {
	int num = 4;
	int guess_num;
	cin >> guess_num;
	for (bool is_continue = true; is_continue;) {
		if (guess_num == num) {
			cout << "猜对了" << endl;
			is_continue = false;

		}
		else if (guess_num > num) {
			cout << "大了" << endl;
			cin >> guess_num;
	
		}
		else {
			cout << "小了" << endl;
			cin >> guess_num;
		}
	}


	return 0;
}