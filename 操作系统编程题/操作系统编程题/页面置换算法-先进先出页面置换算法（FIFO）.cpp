//#include<iostream>
//#include<vector>
//using namespace std;
//int a[110];
//vector<int> arr;
//bool is_(int x) {
//    for (int i = 0; i < arr.size(); i++) {
//        if (arr[i] == x)return true;
//    }
//    return false;
//}
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int num = 0;
//    for (int i = 1; i <= n; i++) {
//        int x;
//        cin >> x;
//        bool flag = is_(x);
//        if (flag)continue;
//        num++;
//        if (arr.size() < m)arr.push_back(x);
//        else {
//            for (int j = 0; j < arr.size() - 1; j++)arr[j] = arr[j + 1];
//            arr[m - 1] = x;
//        }
//    }
//    int ans = 100 * num / n;
//    // num 
//    cout << num << " " << ans << endl;
//
//
//    return 0;
//}