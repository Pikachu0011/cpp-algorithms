#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, m, cnt = 0;
    string b[31], a[31];
    cin >> n >> m;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
        if (a[i].find("qiandao") != -1 || a[i].find("easy") != -1)continue;//²éÕÒ
        else {
            cnt++;
            b[cnt] = a[i];
        }
    }

    if (cnt <= m) {
        cout << "Wo AK le" << endl;
    }
    else cout << b[m + 1] << endl;
    return 0;
}