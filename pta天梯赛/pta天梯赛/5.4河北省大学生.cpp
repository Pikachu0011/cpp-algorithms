#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<string> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int rk_s, rk_g, rk_b;
	cin >> rk_g >> rk_s >> rk_b;
	int p_g, p_s, p_b;
	cin >> p_g >> p_s >> p_b;
	vector<int> team(m, 0);
	for (int i = 0; i < m; i++) {
		int mask = 0;
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '1')mask |= (1 << j);
		}
		team[i] = mask;
	}
	for (int i = 0; i < (1 << n); i++) {
		int k = 0;
		for (int j = 0; j < n; j++) {
			if ((i >> j) & 1)k++;//111
		}
		if (k < 10 || k > 13)continue;
		vector<int> cnt(m, 0);
		for (int x = 0; x < m; x++) {
			for (int j = 0; j < n; j++) {
				if (((team[x] >> j) & 1) && (i >> j) & 1)cnt[x]++;
			}
		}
		sort(cnt.begin(), cnt.end(), greater<int>());
		for (int x = 0; x < m; x++) {
			if (cnt[rk_g - 1] == p_g && cnt[rk_s - 1] == p_s && cnt[rk_b - 1] == p_b) {
				cout << k << endl;
				bool flag = 0;
				for (int j = 0; j < n; j++) {
					if ((i >> j) & 1) {
						if (flag)cout << " ";
						else flag = 1;
						cout << j + 1;
					}					
				}
				return 0;
			}
			
		}

	}
	cout << -1 << endl;
	return 0;
}
/*
13 3
1111111111111
1111111111110
1111111110000
1 2 3
12 11 8
*/