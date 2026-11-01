#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int tn = n;
    vector<int> arr;
    int num = 0;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[x] = i;
        bool flag1 = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == x) {
                flag1 = 1;
                break;
            }
        }
        if (!flag1) {
            num++;
        }
        if (!flag1) {
            if (arr.size() < m)arr.push_back(x);
            else {
                int idx = -1;
                int minn = 10000;
                for (int j = 0; j < arr.size(); j++) {
                    if (mp[arr[j]] < minn) {
                        minn = mp[arr[j]];
                        idx = j;
                    }
                }
                arr[idx] = x;
            }

        }
        // for(int j=0;j<arr.size();j++){
        //         cout<<arr[j]<<" ";
        //     }
        // cout<<endl;
    }
    cout << num << " " << num * 100 / n;




    return 0;
}