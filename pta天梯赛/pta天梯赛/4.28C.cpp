#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int arr[N];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr + n);
        int ans = n;
        for (int i = 0; i < n; i++) {
            if (arr[i] < i) {
                ans = i;

            }
        }
        cout << ans << endl;
    }
    return 0;
}