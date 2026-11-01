//#include<bits/stdc++.h>
//using namespace std;
//int a[100];
//int n, m;
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	a[n + 1] = m;
//	n += 1;
//
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; i++)cout << a[i] << " ";
//	cout << endl;
//	int id;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] == m) {
//			id = i;
//			break;
//		}
//	}
//	int ans = 0;
//	int l = id - 1, r = id + 1;
//	while (l != 0 || r != n + 1) {
//		if (l == 0) {
//			ans += (abs(a[id] - a[r]));
//			cout << a[id] << " " << a[r] << endl;
//			id = r;
//			r++;
//			continue;
//		}
//		if (r == n + 1) {
//			ans += (abs(a[id] - a[l]));
//			cout << a[id] << " " << a[l] << endl;
//			id = l;
//			l--;
//			continue;
//		}
//		int zuo = abs(a[id] - a[l]), you = abs(a[id] - a[r]);
//		if (zuo <= you) {
//			ans += (abs(a[id] - a[l]));
//			cout << a[id] << " " << a[l] << endl;
//			id = l;
//			l--;
//			continue;
//		}
//		else {
//			ans += (abs(a[id] - a[r]));
//			cout << a[id] << " " << a[r] << endl;
//			id = r;
//			r++;
//			continue;
//		}
//
//	}
//	cout << ans << endl;
//	return 0;
//}