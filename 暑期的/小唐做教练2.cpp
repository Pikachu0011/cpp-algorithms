//#include<bits/stdc++.h>
//using namespace std;
//const int N = 30;
//int arr[N][N];
//int main() {
//    int w, n;
//    int i, j;
//    //scanf("%d %d", &w, &n);
//    cin >> w >> n;
//    for (i = 1; i <= w; i++) {
//        for (j = 1; j <= n; j++) {
//            //scanf("%d", &arr[i][j]);
//            cin >> arr[i][j];
//        }
//
//    }
//    int count = 0;
//    for (int i = 1; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            bool flag = 1;
//            int l = arr[1][i], r = arr[1][j];
//            bool lflag = 0, rflag = 0;
//            for (int k = 2; k <= w; k++) {
//                for (int q = 1; q <= n; q++) {
//                    if (arr[k][q] == l)lflag = 1;
//                    if (arr[k][q] == r)rflag = 1;
//                    if (!lflag && !rflag)continue;
//                    else if (lflag && !rflag) {
//                        lflag = 0, rflag = 0;
//                        break;
//                    }
//                    else {
//                        flag = 0;
//                        lflag = 0, rflag = 0;
//                        break;
//                    }
//                }
//                if (!flag)break;
//            }
//            if (flag) {
//                cout << arr[1][i] << " " << arr[1][j] << endl;
//                count++;
//            }
//
//        }
//    }
//
//    printf("%d\n", count);
//
//
//
//
//
//
//
//    return 0;
//}