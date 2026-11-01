//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//
//int n, m;
//struct node {
//    int num;
//    int count;
//};
//vector<node> arr;
//map<int, int> mp;
//bool cmp(node a, node b) {
//    if (a.count != b.count)return a.count > b.count;
//    else return a.num < b.num;
//}
//void solve() {
//    cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int x;
//        cin >> x;
//        mp[x]++;
//    }
//    
//    for (auto i : mp) {
//        arr.push_back({ i.first,i.second });
//    }
//    sort(arr.begin(), arr.end(),cmp);
//    for (int i = 0; i < arr.size(); i++) {
//        cout << arr[i].num <<" " << arr[i].count << endl;
//    }
//
//}
//int main() {
//    
//    solve();
//
//
//    return 0;
//}