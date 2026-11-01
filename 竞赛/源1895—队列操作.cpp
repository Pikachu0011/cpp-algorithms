#include<bits/stdc++.h>
using namespace std;
queue<int> qu;
void operation(int num) {
	if (num == 1) {
		int temp2;
		cin >> temp2;
		qu.push(temp2);
	}
	else if (num == 2) {
		if (qu.empty()) {
			cout << "no" << endl;
			return;
		}
		cout << qu.front() << endl;
		qu.pop();
	}
	else if (num == 3) {
		cout << qu.size() << endl;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		operation(temp);
	}



	return 0;
}