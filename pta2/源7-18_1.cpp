//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 1e3 + 5;
//const int M = 1e3 + 5;
//char ss[N][M];
//bool vis[N][M];
//int n, m, k; // 行数 列数 机器人执行操作的次数
//int x0, sY, d0; // 初始行 列 方向
//
//// 方向数组，分别对应东、南、西、北
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { 1, 0, -1, 0 };
//
//bool check(int x, int y) {
//    return x >= 1 && x <= n && y >= 1 && y <= m;
//}
//
//int main() {
//    int T; // 组数
//    cin >> T;
//
//    while (T--) {
//        int ans = 1;
//        cin >> n >> m >> k;
//        cin >> x0 >> sY >> d0;
//
//        // 初始化 vis 数组
//        memset(vis, 0, sizeof(vis));
//
//        for (int i = 1; i <= n; ++i) {
//            for(int j=1;j<=m;j++)
//                cin >> ss[i][j];
//            
//        }
//
//        int xx = x0;
//        int yy = sY;
//        vis[xx][yy] = 1;
//
//        while (k--) {
//            int nx = xx + dx[d0];
//            int ny = yy + dy[d0];
//
//            if (check(nx, ny) && ss[nx][ny] == '.' ) {
//                
//                xx = nx;
//                yy = ny;
//                if (vis[nx][ny] == 0) {
//                    ans++;
//                    vis[nx][ny] = 1;
//                }
//                
//            }
//            else {
//                d0 = (d0 + 1) % 4; // 顺时针旋转 90 度
//            }
//        }
//
//        cout << ans << endl;
//    }
//
//    return 0;
//}