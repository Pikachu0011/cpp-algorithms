#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int> A, B;
//ÅÐ¶ÏA>=b
bool cmp(vector<int>& a, vector<int>& b) {
	if (a.size() != b.size())return a.size() > b.size();
	else {
		for (int i = a.size() - 1; i >= 0; i--) {
			if (a[i] != b[i])return a[i] > b[i];
		}
	}
	return true;
}

vector<int> sub(vector<int>& a, vector<int>& b) {
	int t = 0;
	vector<int> C;
	for (int i = 0; i < a.size(); i++) {
		t = a[i] - t;
		if (i < b.size())t -= b[i];
		C.push_back((t + 10) % 10);
		if (t < 0)t = 1;
		else t = 0;
	}
	while (C.size() > 1 && C.back() == 0)C.pop_back();
	return C;
}
int main() {
	string a, b;
	cin >> a >> b;
	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
	for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');
	vector<int> C;
	if (cmp(A, B)) {
		C = sub(A, B);
	}
	else {
		C = sub(B, A);
		printf("-");
	}
	

	for (int i = C.size() - 1; i >= 0; i--)cout << C[i];

	return 0;
}