//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//const int MINN = -1e6, MAXX = 1e6;
//typedef long long ll;
//typedef struct node* tree;
//typedef pair<int, int> pii;
//struct node {
//	int data;
//	tree l, r;
//}node;
//bool flag = 0;
//int a[N];
//set<ll> se;
//tree creat(int a[], int n) {//BST
//	if (n == 0)return NULL;
//	int data = a[0];
//	int i;
//	for (i = 1; i < n; i++) {
//		if (a[i] > data) {
//			break;
//		}
//	}
//	//从i开始是右子树；
//	tree t;
//	t = (tree)malloc(sizeof(struct node));
//	t->data = data;
//	t->l = NULL;
//	t->r = NULL;
//	t->l = creat(a + 1, i - 1);
//	t->r = creat(a + i, n - i);
//	return t;
//}
//tree creat_mir(int a[], int n) {//镜像BST
//	if (n == 0)return NULL;
//	int data = a[0];
//	int i;
//	for (i = 1; i < n; i++) {
//		if (a[i] < data) {
//			break;
//		}
//	}
//	//从i开始是右子树；
//	tree t;
//	t = (tree)malloc(sizeof(struct node));
//	t->data = data;
//	t->l = NULL;
//	t->r = NULL;
//	t->l = creat_mir(a + i, n - i);
//	t->r = creat_mir(a + 1, i - 1);
//	return t;
//}
//tree change(tree t) {//镜像树
//	if (t == NULL)return NULL;
//	tree temp;
//	temp = (tree)malloc(sizeof(struct node));
//	temp->l = temp->r = NULL;
//	temp->data = t->data;
//	temp->r = change(t->l);
//	temp->l = change(t->r);
//	return temp;
//}
//bool pd(tree t, int minn, int maxx) {
//	if (!t)return true;
//	if (t->data < minn || t->data > maxx)return false;
//	return pd(t->l, minn, t->data - 1) && pd(t->r, t->data, maxx);
//}
////bool pd_mir(tree t, int minn, int maxx) {
////	if (!t)return true;
////	if (t->data < minn || t->data > maxx)return false;
////	return pd_mir(t->l, t->data, maxx) && pd_mir(t->r, minn, t->data -1 );
////}
//void houxu(tree t) {
//	if (t == NULL)return;
//	if (t->l != NULL) {
//		houxu(t->l);
//	}
//	if (t->r != NULL) {
//		houxu(t->r);
//	}
//	if (flag)cout << " ";
//	else flag = 1;
//	cout << t->data;
//}
//void solve() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	tree t1 = creat(a, n);
//	tree t2 = creat_mir(a, n);
//	if (pd(t1, MINN, MAXX)) {
//		cout << "YES\n";
//		flag = 0; houxu(t1);
//	}
//	else if (pd(t2, MINN, MAXX)) {
//		cout << "YES\n";
//		t2 = change(t2);
//		flag = 0; houxu(t2);
//	}
//	else {
//		cout << "NO\n";
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}