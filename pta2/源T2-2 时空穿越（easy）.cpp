//#include<bits/stdc++.h>
//using namespace std;
//int arr[15][15];
//bool vt[15][15];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int n;
//int maxx = -99;
//void dfs(int x, int y, int sum) {
//    if (x == n && y == n) {
//        maxx = max(sum, maxx);
//
//        return;
//    }
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx>=1 && nx<=n && ny>=1 && ny<=n && vt[nx][ny] == 0) {
//            vt[nx][ny] = 1;
//           
//            dfs(nx, ny, sum + arr[nx][ny]);
//            vt[nx][ny] = 0;
//        }
//
//
//    }
//}
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    vt[1][1] = 1;
//    dfs(1, 1, arr[1][1]);
//    cout << maxx << endl;
//
//    return 0;
//}