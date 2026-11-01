//#include<iostream>
//#include<vector>
//#include<map>  // 用来统计访问次数
//using namespace std;
//
//int a[110];
//vector<int> arr;
//map<int, int> last;
//map<int, int> cnt;
//
//bool is_in(int x) {
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] == x) return true;
//    }
//    return false;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int num = 0;
//
//    for (int i = 1; i <= n; i++) {
//        int x;
//        cin >> x;
//        cnt[x]++;
//        last[x] = i;
//        bool flag = is_in(x);
//        if (!flag) num++;
//
//        if (arr.size() < m) {
//            if (!flag) arr.push_back(x);
//        }
//        else {
//            if (!flag) {
//                int minn = 0;
//                for (int j = 1; j < arr.size(); j++) {
//                    if (cnt[arr[j]] < cnt[arr[minn]]) {
//                        minn = j;
//                    }
//                    else if (cnt[arr[j]] == cnt[arr[minn]]) {
//                        if (last[arr[j]] < last[arr[minn]]) {
//                            minn = j;
//                        }
//                    }
//                }
//                arr[minn] = x;
//            }
//        }
//    }
//
//    int ans = 100 * num / n;
//    cout << num << " " << ans << endl;
//
//    return 0;
//}