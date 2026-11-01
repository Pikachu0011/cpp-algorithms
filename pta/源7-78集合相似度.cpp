#include<bits/stdc++.h>
using namespace std;
vector<set<int>> jh;
double du(int a, int b) {
	int nc = 0;
	
	for (auto i = jh[a].begin(); i != jh[a].end(); i++) {
		if (jh[b].count(*i) ) {
			nc++;
		}
		
	}
	int nt = jh[a].size() + jh[b].size() - nc;
	return 1.0 * nc / nt;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		
		int m;
		cin >> m;
		set<int> t;
		for (int i = 1; i <= m; i++) {
			int temp;
			cin >> temp;
			
			t.insert(temp);
		}
		jh.push_back(t);
		

	}
	int k;
	cin >> k;
	for (int i = 1; i <= k; i++) {
		int a, b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		printf("%.2lf", du(a, b)*100);
		cout << "%" << endl;
	}


	return 0;
}