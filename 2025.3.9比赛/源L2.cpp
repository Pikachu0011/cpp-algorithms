#include<bits/stdc++.h>
using namespace std;
struct point {
	int x;
	int y;
};
bool cmp(point a, point b) {
	return a.x < b.x;
}
int main() {
	int n;
	cin >> n;
	vector<point> red(n);
	vector<point> blue(n);
	for (int i = 0; i < n; i++) {
		cin >> red[i].x >> red[i].y;
	}
	for (int i = 0; i < n; i++) {
		cin >> blue[i].x >> blue[i].y;
	}
	sort(red.begin(), red.end(), cmp);
	vector<bool> vt(n);
	int cnt = 0;
	//遍历每个红点
	for (int j = 0; j < n;j++) {
		point r = red[j];
		int min_index = -1;
		int min_y = 100;
		//遍历每个蓝点
		for (int i = 0; i < n; i++) {
			if (vt[i] == 0 && blue[i].x > r.x && blue[i].y > r.y) {
				if (blue[i].y < min_y) {
					min_y = blue[i].y;
					min_index = i;
				}
			}
		}
		if (min_index != -1) {
			vt[min_index] = 1;
			cnt++;
		}

	}
	cout << cnt ;
	return 0;
}