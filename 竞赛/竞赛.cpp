#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
const int inf = 2e9;
const long long llf = 9e18;
typedef pair<int, int> PII;
typedef long long ll;
map<int, int> mp;
set<int> se;
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 1; i--) {
        if (a[i] > a[i + 1]) {
            a[i]--;
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
