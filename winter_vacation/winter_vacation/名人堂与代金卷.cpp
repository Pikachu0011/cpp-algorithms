#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
struct stu {
	string emi;
	int sco;
	int rank;
	int tong;
};
vector<stu> arr;
bool cmp(stu a, stu b) {
	if (a.sco != b.sco)return a.sco > b.sco;
	else return a.emi < b.emi;
}
void solve() {
	int n, g, k;
	cin >> n >> g >> k;
	int res = 0;
	while (n--) {
		string na;
		int score;
		cin >> na >> score;
		if (score >= g && score <= 100)res += 50;
		else if (score >= 60 && score < g)res += 20;
		stu t;
		t.emi = na;
		t.sco = score;
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end(), cmp);
	cout << res << endl;
	arr[0].rank = 1;
	arr[0].tong = 1;
	for (int i = 1; i < arr.size(); i++) {
		//cout << i + 1 << " " << arr[i].emi << " " << arr[i].sco << endl;
		if (arr[i].sco != arr[i - 1].sco) {
			arr[i].tong = 1;
			arr[i].rank = arr[i - 1].rank + arr[i-1].tong;
		}
		else {
			arr[i].rank = arr[i - 1].rank;
			arr[i].tong = arr[i - 1].tong + 1;

		}
	}
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i].rank > k)break;
		cout << arr[i].rank << " " << arr[i].emi << " " << arr[i].sco << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();



	return 0;
}