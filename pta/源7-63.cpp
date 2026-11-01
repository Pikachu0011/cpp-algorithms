#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;//回答的问题数3		玩家人数4
	char c;
	while (m) {
		m--;
		int ans = 1;
		for (int i = n - 1; i >= 0; i--) {
			cin >> c;
			if (c == 'n') ans += pow(2, i);
		}
		cout << ans  << endl;
	}
	


	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;//问题数
	int m;//玩家人数
	cin >> n >> m;
	getchar();

	while (m--) {
		string str;
		getline(cin, str);
		int num = pow(2, n - 1);//总可能结论数的一半
		int sum = 1;//记录结论编号
		for (int i = 0; i < n; i++) {
			if (str[i] == 'n')
				sum += num;
			num /= 2;
		}
		cout << sum << endl;

	}


	return 0;

}