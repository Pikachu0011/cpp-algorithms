#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int len = s.size();
		int numa = 0;
		int cnt = 0;
		int ans = 1;
		char c = s[0];
		bool flag = 0;
		for (int i = 1; i < len; ++i) {
			if (s[i] == c) {
				ans++;
			}
			else {
				//cout<<ans<<" "<<s[i-1]<<endl;
				if (ans > 3) {
					flag = 1;
					cout << "NO" << endl;
					break;
				}
				else if (ans == 3) {
					cnt++;
					if (cnt > 1) {
						flag = 1;
						cout << "NO" << endl;
						break;
					}
					else if (numa == 1 && cnt == 1) {
						flag = 1;
						cout << "NO\n";
						break;
					}
				}
				else if (ans == 2) {
					numa++;
					if (numa > 2) {
						flag = 1;
						cout << "NO" << endl;
						break;
					}
					else if (numa == 1 && cnt == 1) {
						flag = 1;
						cout << "NO\n";
						break;
					}
				}
				ans = 1;
				c = s[i];
			}
		}
		//cout << ans << " " << s[len - 1] << endl;
		if (!flag) {
			if (ans > 3) {
				cout << "NO" << endl;
			}
			else if (ans == 3) {
				cnt++;
				if (cnt > 1) {
					cout << "NO" << endl;
				}
				else if (numa == 1 && cnt == 1) {
					cout << "NO\n";
				}
				else {
					cout << "YES\n";
				}
			}
			else if (ans == 2) {
				numa++;
				if (numa > 2) {
					cout << "NO" << endl;
				}
				else if (numa == 1 && cnt == 1) {
					cout << "NO\n";
				}
				else {
					cout << "YES\n";
				}
			}
			else cout << "YES\n";

		}
	}
	return 0;
}