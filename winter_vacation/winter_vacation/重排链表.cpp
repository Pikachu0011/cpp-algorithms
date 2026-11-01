#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
typedef pair<int, int> pii;
int a[N];//地址 下一个地址
int pre[N];//地址 前一个地址
set<ll> se;
map<int, int> mp;//地址  数据
string itos(int x) {
	string ans = to_string(x);
	while (ans.size() < 5) {
		ans = '0' + ans;
	}
	return ans;
}
void solve() {
	int st, n;
	cin >> st >> n;
	pre[st] = -2;//头前面的
	int ed;
	while (n--) {
		int add, dat, nex;
		cin >> add >> dat >> nex;
		mp[add] = dat;
		pre[nex] = add;
		a[add] = nex;
		if (nex == -1) {
			ed = add;
			//pre[ed] 是新链表的尾节点
		}
	}
	while (1) {
		cout << itos(ed) << " " << mp[ed] << " " << itos(st) << endl;
		cout << itos(st) << " " << mp[st] << " ";
		if (st == pre[ed])cout << -1 << endl;
		else cout << itos(pre[ed]) << endl;
		ed = pre[ed];
		st = a[st];
		if (st == ed || a[ed] == st)break;
	}
	if (st == ed) {
		cout << itos(st) << " " << mp[st] << " " << -1 << endl;
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