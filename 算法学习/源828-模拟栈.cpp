#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int stk[N], tt;//Ä£ÄâÕ»  Õ»¶¥ÏÂ±ê
//²åÈë
void add(int x) {
	stk[++tt] = x;
}
//µ¯³ö²Ù×÷
void pop() {
	tt--;
}
//ÅÐ¿Õ
bool kong() {
	if (tt > 0)return 0;
	else return 1;
}
//²éÑ¯Õ»¶¥

int cha() {
	return stk[tt];
}


int main() {
	cin.tie();
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			add(x);
		}
		else if (s == "pop") {
			pop();
		}
		else if (s == "empty") {
			if (kong())cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if (s == "query") {
			cout << cha() << endl;
		}
	}
	return 0;
}