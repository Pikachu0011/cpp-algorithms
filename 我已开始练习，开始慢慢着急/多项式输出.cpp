#include<bits/stdc++.h>
using namespace std;
int arr[110];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; i++)cin >> arr[i];
    int nt = n;
    for (int i = 1; i <= n + 1; i++) {
        if (arr[i] == 0) {
            nt--;
            continue;
        }
        if (nt == 0) {
            if (arr[i] > 0)cout << "+" << arr[i];
            else cout << arr[i];
            continue;
        }
        if (i == 1) {
            if (abs(arr[i]) != 1)cout << arr[i];
            else if (arr[i] == -1)cout << "-";
        }
        if (i != 1 && arr[i] > 0) {
            cout << "+";
            if (arr[i] != 1)cout << arr[i];
        }
        if (i != 1 && arr[i] < 0) {
            cout << "-";
            if (arr[i] != -1)cout << abs(arr[i]);
        }
        if (nt != 1)cout << "x^" << nt--;
        else if (nt == 1) {
            cout << "x";
            nt--;
        }



    }

    return 0;
}