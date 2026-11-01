//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10, MOD = 1e9 + 7;
//typedef struct node* tree;
//typedef long long LL;
//struct node {
//	int data;
//	tree l, r;
//}node;
//int pre[N];
//int in[N];
//tree creat(int in[], int pre[], int n) {
//	if (n == 0)return NULL;
//	tree t = (tree)malloc(sizeof(node));
//	t->data = pre[0];
//	t->l = t->r = NULL;
//	int i;
//	for (i = 0; i < n; i++) {
//		if (in[i] == pre[0])break;
//	}
//	t->l = creat(in, pre + 1, i);
//	t->r = creat(in + i + 1, pre + i + 1, n - i - 1);
//	return t;
//}
//tree change(tree t) {
//	tree m;
//	if (t) {
//		if (t->l != NULL || t->r != NULL) {
//			m = t->l;
//			t->l = t->r;
//			t->r = m;
//		}
//		change(t->l);
//		change(t->r);
//	}
//	return t;
//}
//void cengxu(tree t, int n) {
//	if (!t) {
//		cout << "\n";
//		return;
//	}
//	queue<tree> q;
//	q.push(t);
//	bool flag = true;
//	while (!q.empty()) {
//		tree c = q.front();
//		q.pop();
//		if (!flag) cout << " ";
//		cout << c->data;
//		flag = false;
//		if (c->l)q.push(c->l);
//		if (c->r)q.push(c->r);
//	}
//	cout << "\n";
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> in[i];
//	for (int i = 0; i < n; i++) cin >> pre[i];
//	tree t = creat(in, pre, n);
//	t = change(t);
//	cengxu(t, n);
//	return 0;
//}