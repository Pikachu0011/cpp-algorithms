#include<bits/stdc++.h>
using namespace std;
const int N = 6e6 + 10,ddd = 3e6;
typedef long long ll;
struct a {
	int x, y;//一个坐标
};
struct b {
	a p0, p1, p2;//一个答案
};
vector<b> ans;//存答案数组

set<int> xy0;//y == 0 的x
set<int> xy1;//y == 1 的x
set<int> xy2;//y == 2 的x
bool vis2[N];
bool vis1[N];
bool vis0[N];
int n;
bool cmp(b ans1, b ans2) {//将答案按题目顺序排序
	if (ans1.p1.x != ans2.p1.x) {
		return ans1.p1.x < ans2.p1.x;
	}
	return ans1.p0.x < ans2.p0.x;
};
int main() {
	int n;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		if (y == 0) {
			xy0.insert(x);
			vis0[x] = 1;
		}
		if (y == 1){
			xy1.insert(x), vis1[x] = 1;
		}
		if (y == 2) {
			xy2.insert(x), vis2[x] = 1;
		}
	}
	int num0, num1, num2;
	num0 = xy0.size(), num1 = xy1.size(), num2 = xy2.size();
	for (auto i : xy1) {
		for (auto j : xy0) {
			int k = 2 * i - j;
			if (vis2[k+ddd]) {
				a a1, a2, a3;
				a2.x = i, a1.y = 1, a1.x = j, a2.y = 0, a3.x = k, a3.y = 2;
				b b1 = { a1,a2,a3 };
				ans.push_back(b1);
			}
			
		}
	}
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); i++) {
		auto t = ans[i];
		a a0, a1, a2;
		a0 = t.p0, a1 = t.p1, a2 = t.p2;
		cout << "[" << a0.x << ", " << a0.y << "] [" << a1.x << ", " << a1.y << "] [" << a2.x << ", " << a2.y << "]\n";
	}
	if (ans.empty())cout << -1 << endl;
	return 0;
}