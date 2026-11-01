#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
bool check(int x, int y) {
	return x >= 0 && x < 3 && y >= 0 && y < 3;
}
int bfs(string start) {
	queue<string> q;
	unordered_map<string, int> d;
	q.push(start);
	d[start] = 0;
	int dx[4] = { -1,1,0,0 };
	int dy[4] = { 0,0,-1,1 };
	string endd = "12345678x";
	while (q.size()) {
		auto t = q.front();
		q.pop();
		if (t == endd) {
			return d[t];
		}
		int k = t.find('x');
		int dis = d[t];
		int x = k / 3, y = k % 3;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (check(nx, ny)) {
				swap(t[k], t[nx * 3 + ny]);
				if (!d.count(t)) {
					d[t] = dis + 1;
					q.push(t);
				}
				swap(t[k], t[nx * 3 + ny]);//»¹Ô­
			}
		}
	}
	return -1;

}
int main() {
	string start;
	for (int i = 0; i < 9; i++) {
		char c;
		cin >> c;
		start += c;
	}
	cout << bfs(start) << endl;


	return 0;
}