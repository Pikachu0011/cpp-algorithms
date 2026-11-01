#include<bits/stdc++.h>
using namespace std;
int bin[1000];
int findx(int x) {//²éÑ¯
	int r = x;
	while (bin[r] != r)
		r = bin[r];
	return r;
}
void merge(int x, int y) {//ºÏ²¢
	int fx = findx(x);
	int fy = findx(y);
	if (fx != fy)
		bin[fx] = fy;
}
int main() {
	
	int n , m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		bin[i] = i;
	while (m--) {
		int g, x, y;
		cin >> g;
		if (g == 1) {
			cin >> x >> y;
			merge(x, y);
		}
		else {
			cin >> x >> y;
			if (findx(x) == findx(y))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return 0;
}