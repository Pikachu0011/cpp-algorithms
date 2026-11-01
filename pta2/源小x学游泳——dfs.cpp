//#include <bits/stdc++.h>
//using namespace std;
//
//char arr[105][105];
//int vv[105][105] = { 0 };
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//int n, m;
//int maxx = 0;
//
//bool check(int x, int y) {
//    return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//
//int dfs(int x, int y) {
//    vv[x][y] = 1; 
//    int sum = 1;  
//
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (check(nx, ny) && arr[x][y] == arr[nx][ny] && vv[nx][ny] == 0) {
//            sum += dfs(nx, ny); 
//        }
//    }
//
//    return sum; 
//}
//
//int main() {
//    cin >> n >> m;
//
//    
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            cin >> arr[i][j];
//
//    
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            if (vv[i][j] == 0) { 
//                int a = dfs(i, j); 
//                if (a > maxx)
//                    maxx = a; 
//            }
//        }
//    }
//
// 
//    cout << maxx << endl;
//
//    return 0;
//}