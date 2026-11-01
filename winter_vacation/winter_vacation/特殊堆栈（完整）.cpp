#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;
stack<int> st;
vector<int> arr;
set<ll> se;
void Pop() {
	if (st.empty()) {
		cout << "Invalid\n";
	}
	else {
		int data = st.top();
		st.pop();
		cout << data << endl;
		arr.erase(lower_bound(arr.begin(), arr.end(), data));
	}
}
void Push() {
	int data;
	cin >> data;
	st.push(data);
	arr.insert(lower_bound(arr.begin(), arr.end(), data), data);
}
void PeekMedian() {
	if (st.empty()) {
		cout << "Invalid\n";
	}
	else {
		int len = arr.size();
		len = (len + 1) / 2 - 1;
		cout << arr[len] << endl;
	}
}
void solve() {
	string s;
	cin >> s;
	if (s == "Pop")Pop();
	else if (s == "Push")Push();
	else if (s == "PeekMedian")PeekMedian();
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}