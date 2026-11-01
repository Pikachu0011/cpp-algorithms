#include<bits/stdc++.h>
using namespace std;
int main() {
	int a1, a2, n;
	cin >> a1 >> a2 >> n;
	vector<int> ss;
	ss.push_back(a1);
	ss.push_back(a2);

	int index = 0;
	while (ss.size() <= n) {
		int temp = ss[index] * ss[index + 1];
		if (temp >= 10) {
			ss.push_back(temp / 10);
			ss.push_back(temp % 10);
		}
		else {
			ss.push_back(temp);
		}
		index++;
	}
	for (int i = 0; i < n; i++) {
		if (i != 0)
			cout << " ";
		cout << ss[i];
	}
	cout << endl;
	return 0;
}