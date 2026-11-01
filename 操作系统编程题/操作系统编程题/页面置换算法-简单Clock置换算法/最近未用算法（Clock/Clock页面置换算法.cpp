//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n, m;
//    if (!(cin >> n >> m)) return 0;
//    vector<int> seq(n);
//    for (int i = 0; i < n; ++i) cin >> seq[i];
//
//    vector<int> frames(m, -1);
//    vector<int> use(m, 0);
//    int hand = 0;
//    int faults = 0;
//
//    for (int p : seq) {
//        // check hit
//        int hit = -1;
//        for (int i = 0; i < m; ++i) if (frames[i] == p) { hit = i; break; }
//        if (hit != -1) {
//            use[hit] = 1; // hit, set use bit
//            continue;
//        }
//
//        // miss
//        ++faults;
//        // if there is an empty slot, put at first empty we meet starting from hand
//        bool placed = false;
//        for (int k = 0; k < m; ++k) {
//            if (frames[hand] == -1) {
//                frames[hand] = p;
//                use[hand] = 1;
//                hand = (hand + 1) % m;
//                placed = true;
//                break;
//            }
//            hand = (hand + 1) % m;
//        }
//        if (placed) continue;
//
//        // no empty slot: perform clock replacement
//        while (true) {
//            if (use[hand] == 0) {
//                frames[hand] = p;
//                use[hand] = 1;
//                hand = (hand + 1) % m;
//                break;
//            }
//            else {
//                use[hand] = 0;
//                hand = (hand + 1) % m;
//            }
//        }
//    }
//
//    int pct = (faults * 100) / n;
//    cout << faults << " " << pct << "\n";
//    return 0;
//}
