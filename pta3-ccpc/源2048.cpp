//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n + 1); 
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//    }
//
//    int max_k = *max_element(a.begin() + 1, a.end());
//    vector<vector<int>> f(n + 2, vector<int>(max_k + n + 2, 0));
//
//  
//    for (int l = 1; l <= n; ++l) {
//        f[l][a[l]] = l;
//    }
//
//   
//    for (int k = 1; k <= max_k + n; ++k) {
//        for (int l = 1; l <= n; ++l) {
//            if (f[l][k - 1] != 0) {
//                int r1 = f[l][k - 1];
//                if (r1 + 1 <= n && f[r1 + 1][k - 1] != 0) {
//                    f[l][k] = f[r1 + 1][k - 1];
//                }
//            }
//        }
//    }
//
//
//    int K = max_k;
//    while (true) {
//        bool found = false;
//        for (int l = 1; l <= n; ++l) {
//            if (f[l][K + 1] != 0) {
//                found = true;
//                break;
//            }
//        }
//        if (found) {
//            K++;
//        }
//        else {
//            break;
//        }
//    }
//
//
//    int T = INT_MAX;
//    for (int l = 1; l <= n; ++l) {
//        if (f[l][K] != 0) {
//            T = min(T, f[l][K] - l);
//        }
//    }
//
//    cout << K << " " << T << endl;
//
//    return 0;
//}