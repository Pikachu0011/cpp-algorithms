//#include<bits/stdc++.h>
//using namespace std;
//const int N = 30 + 10;
//typedef struct node* tree;
//typedef long long ll;
//typedef pair<int, int> pii;
//int a[N];
//struct node {
//	int data;
//	tree l, r;
//}node;
//int getlsize(int n) {
//	if (n <= 1)return 0;
//	int h = floor(log2(n)) + 1;
//	int last = n - ((1 << (h - 1)) - 1);
//	int l_maxx = 1 << (h - 2);
//	int last_num = min(l_maxx, last);
//	return ((1 << (h - 2)) - 1) + last_num;
//}
//tree creat(int a[],int n) {
//	if (n == 0)return NULL;
//	tree t;
//	t = (tree)malloc(sizeof(node));
//	t->l = NULL;
//	t->r = NULL;
//	t->data = a[n - 1];
//	int l = getlsize(n);
//	t->l = creat(a, l);
//	t->r = creat(a + l, n - l - 1);
//	return t;
//}
//void cengxu(tree t) {
//	if (!t) {
//		cout << endl;
//		return;
//	}
//	bool flag = 0;
//	queue<tree> q;
//	q.push(t);
//	while (!q.empty()) {
//		auto temp = q.front();
//		q.pop();
//		if (flag)cout << " ";
//		else flag = 1;
//		cout << temp->data;
//		if (temp->l)q.push(temp->l);
//		if (temp->r)q.push(temp->r);
//	}
//
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	tree t = creat(a, n);
//	cengxu(t);
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//
//
//
//	return 0;
//}