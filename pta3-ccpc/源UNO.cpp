//#include<bits/stdc++.h>
//using namespace std;
//const int N = 200010;
//int idx;
//int e[N], l[N], r[N];
//int hh, tal;
//int n, m;
//int main() {
//    cin.tie();
//    ios::sync_with_stdio(false);    
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        cin >> e[i];
//        if (i - 1 == 0)l[i] = n;
//        else l[i] = i - 1;
//        if (i + 1 > n)r[i] = 1;
//        else r[i] = i + 1;
//
//    }
//    string s;
//    cin >> s;
//    bool flag = 1;//1是顺时针，0是逆时针
//    int idx = 1;
//
//    for (int i = 0; i < m; i++) {
//        
//        if (flag) {//顺时针
//            if (s[i] == 'C') {
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = r[idx];
//            }
//            else if (s[i] == 'S') {
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = r[idx];
//                idx = r[idx];
//
//            }
//            else if (s[i] == 'D') {
//                e[idx]--;
//                
//                e[r[idx]] += 2;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = r[idx];
//                idx = r[idx];
//            }
//            else {//反转牌
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                flag = 0;
//                idx = l[idx];
//            }
//        }
//        else {//逆时针
//            if (s[i] == 'C') {
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = l[idx];
//            }
//            else if (s[i] == 'S') {
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = l[idx];
//                idx = l[idx];
//
//            }
//            else if (s[i] == 'D') {
//                e[idx]--;
//               
//                e[l[idx]] += 2;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                idx = l[idx];
//                idx = l[idx];
//            }
//            else {//反转牌
//                e[idx]--;
//                if (e[idx] == 0) {
//                    r[l[idx]] = r[idx];
//                    l[r[idx]] = l[idx];
//                }
//                flag = 1;
//                idx = r[idx];
//            }
//        }
//        //chu();
//    }
//    for (int i = 1; i <= n; i++) {
//        cout << e[i] << "\n";
//    }
//    return 0;
//}
//
