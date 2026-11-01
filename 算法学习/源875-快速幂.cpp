#include<bits/stdc++.h>

using namespace std;
const int N = 100010;
typedef long long LL;

LL n;
LL qmi(LL a, LL b, LL p) {
    LL res = 1 % p;
    while (b) {
        if (b & 1)res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }

    return res;
}
int main() {
    cin.tie();
    ios::sync_with_stdio(false);


        LL a, b, p;
        cin >> a >> b >> p;

        cout << qmi(a, b, p) << "\n";

   

    return 0;
}
