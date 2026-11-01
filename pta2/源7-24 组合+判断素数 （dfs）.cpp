#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int b[25];
//bool vt[25];
bool check1(int num) {
	if (num < 2)return false;
	bool count = true;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			count = false;
			break;
		}

	}
	return count;
}
int cnt = 0;

void dfs(int now,int sum,int ss) {//第几个数 和 
	if (now >= k) {
		if (check1(sum))
			cnt++;

	}
	for (int i = ss + 1; i <= n; i++) {
		//if (vt[i] == 0) {
			//vt[i] = 1;
			dfs(now + 1, sum + b[i], i);
			//vt[i] = 0;
		//}
	}

}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	dfs(0, 0, 0);
	cout << cnt << endl;
	return 0;
}
/*
3  7  12  19  
dfs(0,0,0)->dfs(1,3,1)->dfs(2,10,2)->dfs(3,22,3) 1 2 3
								   ->dfs(3,29,3) 1 2 4
					  ->dfs(2,15,3)->dfs(3,34,4) 1 3 4
			dfs(1,7,2)->dfs(2,19,3)->dfs(3,38,4) 2 3 4 



*/