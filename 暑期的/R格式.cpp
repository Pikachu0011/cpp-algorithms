#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];
set<ll> se;
string s1, s2;
vector<vector<int>> arr;//arr[i] ´æÄæÐò2^i
vector<int> mul(vector<int> A, int b) {
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size() || t; i++) {
		if(i < A.size())t += A[i] * b;
		C.push_back(t % 10);
		t /= 10;
	}
	while (C.size() > 1 && C.back() == 0)C.pop_back();
	return C;
}
void init() {
	arr.resize(N);
	for (int i = 0; i < N; i++)arr[i].resize(N);
	vector<int> temp;
	temp.push_back(1);
	arr[0] = temp;
	for (int i = 1; i < N; i++) {
		arr[i] = mul(arr[i - 1], 2);
	}
}
void solve() {
	int n;
	string b;
	cin >> n >> b;
	vector<int> A;
	int pos;
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '.') {
			pos = i;
			break;
		}
	}
	int len = b.size() - pos - 1;
	b.erase(pos, 1);
	int t = stoi(b);
	auto C = mul(arr[n], t);
	for (int i = C.size() - 1; i >= len; i--)cout << C[i];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	init();
	while (t--)solve();
	return 0;
}