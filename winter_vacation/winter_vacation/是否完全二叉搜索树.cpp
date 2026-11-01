#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef struct node* tree;
typedef long long ll;
typedef pair<int, int> pii;
struct node {
	int data;
	tree l, r;
};
set<ll> se;
void creat(int val, tree& t) {
	if (!t) {
		t = (tree)malloc(sizeof(struct node));
		t->data = val;
		t->l = t->r = NULL;
		return;
	}
	if (val > t->data)creat(val, t->l);
	else creat(val, t->r);
}
void cengci(tree t) {
	if (t == NULL)return;
	queue<tree> q;
	q.push(t);
	int flag = 0;
	while (!q.empty()) {
		tree c = q.front();
		q.pop();
		if (flag) {
			cout << " ";
		}
		else flag = 1;
		cout << c->data;
		if (c->l)q.push(c->l);
		if (c->r)q.push(c->r);
	}
}
void solve() {
	int n;
	cin >> n;
	int tn = n;
	tree t = NULL;
	while (tn--) {
		int x;
		cin >> x;
		creat(x, t);
	}
	cengci(t);
	cout << endl;

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