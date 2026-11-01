//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int a[110];
//    for (int i = 1; i <= n; i++)cin >> a[i];
//    vector<int> arr;
//    int num = 0;
//    for (int i = 1; i <= n; i++) {
//        bool ff = 0;
//        for (int j = 0; j < arr.size(); j++) {
//            if (arr[j] == a[i]) {
//                ff = 1;
//                break;
//            }
//        }
//        if (ff)continue;
//        num++;
//        if (arr.size() < m) {
//            arr.push_back(a[i]);
//        }
//        else {
//            int maxx = -1;
//            int flag = -1;
//            for (int j = 0; j < arr.size(); j++) {
//                int g = arr[j];
//                int jin = 110;
//                for (int k = i + 1; k <= n; k++) {
//                    if (a[k] == g) {
//                        jin = k - i;
//                        break;
//                    }
//                }
//                if (jin == 110) {//不再访问
//                    maxx = 110;
//                    flag = j;
//                    break;
//                }
//                else {
//                    if (jin > maxx) {
//                        maxx = jin;
//                        flag = j;
//                    }
//                }
//            }
//            //falg 为 删除的数
//            arr[flag] = a[i];
//        }
//    }
//    cout << num << " ";
//    int ans = 100 * num / n;
//    printf("%d", ans);
//
//
//    return 0;
//}