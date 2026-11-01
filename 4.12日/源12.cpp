#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int arr[5];
bool vt[5];
int pai[5];
int n;
LL sum = 0;
bool vt2[25];
vector<LL> pf;
//int cnt = pf.size() / 2;


void dfs(int now) {//Î»Êý
	if (now >= n + 1) {
		LL sum = 0;
		int temp = 0;
		for (int i = 1; i <= n; i++) {
			temp += (pai[i] * pow(10, n - i));
		}
		
		pf.push_back(temp * temp);
	
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!vt[i]) {
			pai[now] = arr[i];
			vt[i] = 1;
			dfs(now + 1);
			vt[i] = 0;
		}
	}
}
void dfs2(LL nn) {
	if (nn > sum)return;
	if (nn == sum) {
		cout << nn;
		return;

	}
	for (int i = 1; i <= pf.size(); i++) {
		if (!vt2[i]) {
			vt2[i] = 1;
			dfs2(nn + pf[i]);
			vt2[i] = 0;
		}
	}
}
int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dfs(1);
	//LL sum = 0;
	for (int i = 1; i <= pf.size(); i++) {
		//cout << pf[i] << endl;
		sum += pf[i];
	}
	sum /= 2;
	dfs2(0);
	return 0;
}