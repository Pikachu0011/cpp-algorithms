//#include<bits/stdc++.h>
//using namespace std;
//void solve() {
// 
//    int n1 = 0, n2 = 0;
//    string s;
//    char C;
//    while (cin >> C)
//    {
//        if (C == 'E')break;
//        s += C;
//    }
//
//    int i = 0;
//    while (1) {
//        if (i == s.size())break;
//        if (abs(n1 - n2) >= 2 && (n1 >= 11 || n2 >= 11)) {
//            cout << n1 << ":" << n2 << endl;
//            n1 = 0, n2 = 0;
//        }
//        if (s[i] == 'W')n1++;
//        else if (s[i] == 'L')n2++;
//        i++;
//    }
//    if (n1 || n2) {
//        cout << n1 << ":" << n2 << endl;
//    }
//    cout << endl;
//    n1 = 0, n2 = 0;
//    i = 0;
//    while (1) {
//        if (i == s.size())break;
//        if (abs(n1 - n2) >= 2 && (n1 >= 21 || n2 >= 21)) {
//            cout << n1 << ":" << n2 << endl;
//            n1 = 0, n2 = 0;
//        }
//        if (s[i] == 'W')n1++;
//        else if (s[i] == 'L')n2++;
//        i++;
//    }
//    if (n1 || n2) {
//        cout << n1 << ":" << n2 << endl;
//    }
//}
//signed main() {
//    solve();
//
//    return 0;
//}