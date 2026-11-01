#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 300010;
int n, m;
int a[N], s[N];
vector<int> alls;//需要离散化的数

vector<PII> add, querry;
//			处理加数 需要求的左右区间
int find(int x) {//寻找大于等于x的最小的数
	int l = 0, r = alls.size() - 1;
	while (l < r) {
		int mid = l + r >> 1;
		if (alls[mid] >= x)r = mid;
		else l = mid + 1;
	}
	return r + 1;//映射从1开始
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x, c;
		cin >> x >> c;
		add.push_back({ x,c });//在位置x 加上 c
		alls.push_back(x);
	}
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		querry.push_back({ l,r });
		alls.push_back(l);
		alls.push_back(r);
	}
	//去重
	sort(alls.begin(), alls.end());
	alls.erase(unique(alls.begin(), alls.end()), alls.end());
	//unique()去重后放在数组前面，返回尾部下标，再erase后面的值

	//处理加数
	for (auto it : add) {
		int x = find(it.first);
		a[x] += it.second;
	}
	//处理前缀和

	for (int i = 1; i <= alls.size(); i++) {
		s[i] = s[i - 1] + a[i];
	}

	//处理询问
	for (auto it : querry) {
		int l = find(it.first);
		int r = find(it.second);
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}