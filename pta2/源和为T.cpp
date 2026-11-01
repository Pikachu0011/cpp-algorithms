//#include<bits/stdc++.h>
//using namespace std;
//
//int n;
//int T;
////int arr[20];
//vector<int> arr;
//int cnt = 0; 
//
//void dfs(int index, int sum, vector<int> p) {//第几个数 和 
//    if (!p.empty() && sum == T) {
//        for (int i = 0; i < p.size(); i++) {
//            cout << p[i] << " ";
//        }
//        cnt++;
//        cout << endl;
//        return;
//    }
//    if (index >= n) {
//        return;
//    }
//    //使用
//    p.push_back(arr[index]);
//    dfs(index + 1, sum + arr[index], p);
//    p.pop_back();
//    //不适用
//
//    dfs(index + 1, sum, p);
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        arr.push_back(temp);
//    }
//    cin >> T;
//
//    vector<int> p;
//    dfs(0, 0, p);
//
//    cout << cnt << endl; 
//
//    return 0;
//}