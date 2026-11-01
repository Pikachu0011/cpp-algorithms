#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
typedef long long ll;
typedef pair<int, int> pii;
set<ll> se;
int dist[N];
int vt[N];
int arr[N][N];
int n, m;
ll qmi(ll a, ll p, ll k) {//a^b % k
	ll res = 1;
	if (p & 1) {
		res = res * a % k;
	}
	p >> 1;
	a = a * a % k;
}
//浮点数二分
bool check(double mid) {

}
double erfen(double l, double r) {
	double eps = -1e6;
	while (r - l > eps) {
		double mid = (l + r) / 2;
		if (check(mid))r = mid;
		else l = mid;
	}
	return l;
}
//高精度加
vector<int> add(vector<int> a, vector<int> b) {
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size() || i < b.size(); i++) {
		if (i < a.size())t += a[i];
		if (i < b.size())t += b[i];
		c.push_back(t % 10);
		t /= 10;
	}
	if (t)c.push_back(t);
	return c;
}
vector<int> sub(vector<int> a, vector<int> b) {
	vector<int> c;
	for (int i = 0, t = 0; i < a.size(); i++) {
		t = a[i] - t;
		if (i < b.size())t -= b[i];
		c.push_back((t + 10) % 10);
		if (t < 0)t = 1;
		else t = 0;
	}
	while (c.size() > 1 && c.back() == 0)c.pop_back();
	return c;
}
bool cmp(vector<int> a, vector<int> b) {
	if (a.size() != b.size())return a.size() > b.size();
	for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] != b[i])return a[i] > b[i];
	}
	return true;
}
vector<int> mul(vector<int> a, int b) {
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size() || t; i++) {
		if (i < a.size())t += a[i] * b;
		c.push_back(t % 10);
		t /= 10;
	}
	while (c.size() > 1 && c.back() == 0)c.pop_back();
	return c;
}
// 求n的第k位 n >> k & 1;
// 返回 n 的最后一位 1 lowbit(n) = n & -n;
//(1) 朴素并查集
int p[N];
int find(int x) {
	if (p[x] != x)p[x] = find(p[x]);
	return p[x];
}
void _union(int a, int b) {
	int root_a = find(a);
	int root_b = find(b);
	if (root_a != root_b)p[root_a] = root_b;
}
//(2)维护size的并查集
int siz[N];//size[]只有祖宗节点有意义，表示祖宗节点所在集合的数量
void init() {
	for (int i = 1; i <= n; i++) {
		p[i] = i;
		siz[i] = 1;
	}
}
void _union2(int a, int b) {
	int root_a = find(a);
	int root_b = find(b);
	if (root_a != root_b) {
		p[root_a] = root_b;
		siz[root_b] += siz[root_b];
	}
}
//(3)维护到祖宗节点距离的并查集
int d[N];//p[x]存x的祖宗节点，d[x]存x到p[x] 的距离
int find3(int x) {
	if (p[x] != x) {
		int u = find(p[x]);
		d[x] += d[p[x]];
		p[x] = u;
	}
	return p[x];
}
void init3() {
	for (int i = 1; i <= n; i++) {
		p[i] = i;
		d[i] = 0;
	}
}
void _union3(int a, int b) {
	int root_a = find(a);
	int root_b = find(b);
	if (root_a != root_b) {
		p[root_a] = root_b;
		d[root_a] = 1;
	}
}
int dijkstra() {
	int dist[N];
	memset(dist, 0x3f, sizeof(dist));

}

void solve() {
	

}
int main() {
	solve();



	return 0;
}
