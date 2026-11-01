#include<bits/stdc++.h>
using namespace std;
int n;
int a[123456], p, l;
string q;
void C() {
    for (int i = 1; i <= l; i++) {
        a[i] *= 2;
    }
    for (int i = 1; i <= l; i++) {
        a[i + 1] += a[i] / 10;
        a[i] = a[i] % 10;
    }
    if (a[l + 1])l++;
}
int main() {
    cin >> n >> q;
    reverse(q.begin(), q.end());
    p = q.find('.');
    q.erase(p, 1);
    l = q.size();
    for (int i = 0; i < l; i++) {
        a[i + 1] = q[i] - '0';
    }
    for (int i = 1; i <= n; i++) {
        C();
    }
    if (a[p] >= 5)a[p + 1]++;
    for (int i = p + 1; i <= l; i++) {
        a[i + 1] += a[i] / 10;
        a[i] = a[i] % 10;
    }
    if (a[l + 1])l++;
    for (int i = l; i > p; i--) {
        cout << a[i];
    }
    return 0;
}