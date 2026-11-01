//#include <bits/stdc++.h>
//using namespace std;
//using ull = unsigned long long;
//
//string ull_to_str(ull x) {
//    if (x == 0) return "0";
//    string s;
//    while (x > 0) {
//        s.push_back('0' + (x % 10));
//        x /= 10;
//    }
//    reverse(s.begin(), s.end());
//    return s;
//}
//
//ull str_to_ull(const string& s) {
//    ull x = 0;
//    for (char c : s) x = x * 10 + (c - '0');
//    return x;
//}
//
//// 构造长度为 L 的最小数（首位不能为0，当 L>1）
//string build_min_len(const int D[2], int L) {
//    if (L == 1) return string(1, char('0' + D[0])); // D[0] 是较小的
//    int first = -1;
//    if (D[0] != 0) first = D[0];
//    else if (D[1] != 0) first = D[1];
//    if (first == -1) return string(); // 无法构造（只有0且 L>1）
//    string t;
//    t.push_back(char('0' + first));
//    char mn = char('0' + D[0]);
//    for (int i = 1; i < L; i++) t.push_back(mn);
//    return t;
//}
//
//// 构造长度为 L 的最大数（首位不能为0，当 L>1）
//string build_max_len(const int D[2], int L) {
//    if (L == 1) return string(1, char('0' + D[1])); // D[1] 是较大的
//    int first = -1;
//    if (D[1] != 0) first = D[1];
//    else if (D[0] != 0) first = D[0];
//    if (first == -1) return string();
//    string t;
//    t.push_back(char('0' + first));
//    char mx = char('0' + D[1]);
//    for (int i = 1; i < L; i++) t.push_back(mx);
//    return t;
//}
//
//// 等长：找最小的 >= s（若存在返回字符串，否则返回空）
//string ceil_equal(const int D[2], const string& s) {
//    int m = s.size();
//    string t(m, '?');
//    for (int pos = 0; pos < m; ++pos) {
//        int need = s[pos] - '0';
//        int pick = -1;
//        // 在两个数里找最小的 >= need，且首位非零约束
//        for (int k = 0; k < 2; k++) {
//            int d = D[k];
//            if (pos == 0 && m > 1 && d == 0) continue;
//            if (d >= need) {
//                pick = d;
//                break; // D sorted ascending
//            }
//        }
//        if (pick != -1) {
//            t[pos] = char('0' + pick);
//            if (pick > need) {
//                // 填后面最小的
//                char mn = char('0' + D[0]);
//                for (int j = pos + 1; j < m; j++) t[j] = mn;
//                return t;
//            }
//            else {
//                // equal, 继续
//                continue;
//            }
//        }
//        else {
//            // 当前位置没有 >= need，回溯到前面找可以增大的位置
//            int j = pos - 1;
//            bool done = false;
//            while (j >= 0) {
//                int cur = t[j] - '0';
//                // 找到比 cur 大的最小数字
//                int next = -1;
//                for (int k = 0; k < 2; k++) {
//                    if (D[k] > cur) {
//                        if (j == 0 && m > 1 && D[k] == 0) continue;
//                        next = D[k];
//                        break;
//                    }
//                }
//                if (next != -1) {
//                    t[j] = char('0' + next);
//                    // 填充后面为最小
//                    char mn = char('0' + D[0]);
//                    for (int z = j + 1; z < m; ++z) t[z] = mn;
//                    return t;
//                }
//                else j--;
//            }
//            return string();
//        }
//    }
//    // 全部匹配，s 本身所有位都在 D 中
//    return t;
//}
//
//// 等长：找最大的 <= s（若存在返回字符串，否则返回空）
//string floor_equal(const int D[2], const string& s) {
//    int m = s.size();
//    string t(m, '?');
//    for (int pos = 0; pos < m; ++pos) {
//        int need = s[pos] - '0';
//        int pick = -1;
//        // 在两个数里找最大的 <= need，且首位非零约束
//        for (int k = 1; k >= 0; k--) {
//            int d = D[k];
//            if (pos == 0 && m > 1 && d == 0) continue;
//            if (d <= need) {
//                pick = d;
//                break;
//            }
//        }
//        if (pick != -1) {
//            t[pos] = char('0' + pick);
//            if (pick < need) {
//                // 填后面最大
//                char mx = char('0' + D[1]);
//                for (int j = pos + 1; j < m; j++) t[j] = mx;
//                return t;
//            }
//            else {
//                continue;
//            }
//        }
//        else {
//            // 无 <= need，回溯前面找可以减小的位置
//            int j = pos - 1;
//            bool done = false;
//            while (j >= 0) {
//                int cur = t[j] - '0';
//                int prev = -1;
//                for (int k = 0; k < 2; k++) {
//                    if (D[k] < cur) {
//                        prev = D[k]; // since D[0] < D[1], scanning low->high finds smaller; but we need largest < cur, so check both
//                    }
//                }
//                // better do explicit:
//                int choose = -1;
//                if (D[1] < cur) {
//                    if (j == 0 && m > 1 && D[1] == 0) {
//                        // try D[0] maybe also zero
//                        if (D[0] < cur && !(j == 0 && m > 1 && D[0] == 0)) choose = D[0];
//                    }
//                    else choose = D[1];
//                }
//                else if (D[0] < cur) {
//                    if (!(j == 0 && m > 1 && D[0] == 0)) choose = D[0];
//                }
//                if (choose != -1) {
//                    t[j] = char('0' + choose);
//                    char mx = char('0' + D[1]);
//                    for (int z = j + 1; z < m; ++z) t[z] = mx;
//                    return t;
//                }
//                else j--;
//            }
//            return string();
//        }
//    }
//    return t;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int T;
//    if (!(cin >> T)) return 0;
//    while (T--) {
//        ull a;
//        int n;
//        cin >> a >> n;
//        int Darr[2];
//        cin >> Darr[0] >> Darr[1];
//        if (Darr[0] > Darr[1]) swap(Darr[0], Darr[1]);
//        string s = to_string(a);
//        int m = (int)s.size();
//        ull best = (ull)(-1); // ULLONG_MAX
//
//        auto consider = [&](const string& t) {
//            if (t.empty()) return;
//            if (t.size() > 1 && t[0] == '0') return;
//            ull val = str_to_ull(t);
//            ull diff = (val >= a) ? (val - a) : (a - val);
//            if (diff < best) best = diff;
//            };
//
//        for (int L = 1; L <= m + 1; ++L) {
//            if (L < m) {
//                string t = build_max_len(Darr, L);
//                consider(t);
//            }
//            else if (L > m) {
//                string t = build_min_len(Darr, L);
//                consider(t);
//            }
//            else {
//                string c1 = ceil_equal(Darr, s);
//                consider(c1);
//                string c2 = floor_equal(Darr, s);
//                consider(c2);
//            }
//        }
//        if (best == (ull)(-1)) best = 0;
//        cout << best << '\n';
//    }
//    return 0;
//}
