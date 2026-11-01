#include<bits/stdc++.h>
using namespace std;
int xy[1001][1001] = { 0 };
int xz[1001][1001] = { 0 };
int yz[1001][1001] = { 0 };

int main() {
	int n, q;
	cin >> n >> q;
	int ans = 0;
	
	while (q--) {
		int x, y, z;
		cin >> x >> y >> z;
		xy[x][y]++;
		xz[x][z]++;
		yz[y][z]++;
		
		if (xy[x][y] == n)
			ans++;
		if (xz[x][z] == n)
			ans++;
		if (yz[y][z] == n)
			ans++;
		
		cout << ans << endl;
	}


	return 0;
}