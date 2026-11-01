#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int> A, B;

vector<int> add(vector<int>& a, vector<int>& b) {
	int t = 0;
	vector<int> C;
	for (int i = 0; i < a.size() || i < b.size(); i++) {
		if (i < a.size())t += a[i];
		if (i < b.size())t += b[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t)C.push_back(1);
}
int main() {
	string a, b;
	cin >> a >> b;
	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
	for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');
	auto C = add(A, B);
	
	for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
	return 0;
}