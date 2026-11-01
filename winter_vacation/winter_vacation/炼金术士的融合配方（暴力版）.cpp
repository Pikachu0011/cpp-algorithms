#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;

ll a[N], b[N], c[N];
int T;
int n;
ll s;
int main() {
	cin >> T;
	while (T--) {
		cin >> n >> s;
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> b[i] >> c[i];
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++) {
			ll res;
			ll maxa;
			ll minb;
			ll sum;
			if (c[i] <= s) {
				res = 1;
				sum = c[i];
				maxa = a[i];
				minb = b[i];
			}
			for (int j = i + 1; j <= n; j++) {
				maxa = max(maxa, a[j]);
				minb = min(minb, b[j]);
				if (sum + c[i] <= s && maxa <= minb) {
					res++;
					sum += c[i];
				}
				else {
					break;
				}

			}
			ans = max(ans, res);
			
		}
		cout << ans << endl;

	}


	return 0;
}
