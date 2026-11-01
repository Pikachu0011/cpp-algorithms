#include<bits/stdc++.h>
using namespace std;
const int N = 30;
int arr[N][N];
int main() {
    int w, n;
    int i, j;
    //scanf("%d %d", &w, &n);
    cin >> w >> n;
    for (i = 1; i <= w; i++) {
        for (j = 1; j <= n; j++) {
            //scanf("%d", &arr[i][j]);
            cin >> arr[i][j];
        }

    }
    int count = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[1][i] > arr[1][j]) {
                bool flag = 1;
                for (int k = 2; k <= w; k++) {
                    if (arr[k][i] > arr[k][j]) {
                        
                    }
                    else {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    cout << i << " " << j << endl;
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);







    return 0;
}