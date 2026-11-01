#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
int a[N];
set<ll> se;
int n;
string s1, s2;
int crossmax(int arr[], int l, int mid, int r) {
	int left = arr[mid];
	int cur = arr[mid];
	for (int i = mid - 1; i >= l; i--) {
		cur += arr[i];
		left = max(cur, left);
	}
	int right = arr[mid + 1];
	cur = arr[mid + 1];
	for (int i = mid + 2; i <= r; i++) {
		cur += arr[i];
		right = max(cur, right);
	}
	return left + right;
}
int dfs(int a[], int l, int r) {
	if (l == r)return a[l];

	int mid = (l + r) >> 1;

	int leftmax = dfs(a, l, mid);
	int rightmax = dfs(a, mid + 1, r);
	int cross = crossmax(a, l, mid, r);
	return max({ leftmax,rightmax,cross });
}
void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	int ans = dfs(a,1,n);
	cout << ans << endl;


}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--)solve();
	return 0;
}
/*
施「require('fs').readFileSync」於「「/dev/stdin」」。名之曰「數據」。
施「(buf => buf.toString().trim())」於「數據」。昔之「數據」者。今其是矣。

施「(s => s.replace('\n',' '))」於「數據」。昔之「數據」者。今其是矣。
施「(s => s.replace('\r',''))」於「數據」。昔之「數據」者。今其是矣。
施「(s => s.split(' '))」於「數據」。昔之「數據」者。今其是矣。

注曰。「「文言尚菜，無對象之操作，故需 JavaScript 之语法」」。

夫「數據」之一。取一以施「parseInt」。名之曰「項數」。
減「項數」以一。昔之「項數」者。今其是矣。
吾有一數。曰三。名之曰「第幾項」。
夫「數據」之二。取一以施「parseInt」。名之曰「最大值」。
吾有一數。名之曰「和」。 昔之「和」者。今「最大值」是矣。
為是「項數」遍。
	夫「數據」之「第幾項」。取一以施「parseInt」。名之曰「本項」。
	若「和」小於零者。
		昔之「和」者。今零是矣。
	云云。
	加「本項」於「和」。 昔之「和」者。 今其是矣。
	若「和」大於「最大值」者。
		昔之「最大值」者。今「和」是矣。
	云云。
	加一於「第幾項」。昔之「第幾項」者。今其是矣。
云云。
夫「最大值」。書之。


*/