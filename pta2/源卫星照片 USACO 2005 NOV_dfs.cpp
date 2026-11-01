#include<bits/stdc++.h>
using namespace std;

char arr[1005][85]; 
int vv[1005][85] = { 0 }; 
int dx[4] = { -1, 1, 0, 0 }; 
int dy[4] = { 0, 0, -1, 1 };

int W, H; 
int maxx = 0; 


bool check(int x, int y) {
    return x >= 1 && x <= H && y >= 1 && y <= W;
}


void dfs(int x, int y, int& sum) {
   
    vv[x][y] = 1;
    sum++; 

   
    if (sum > maxx) {
        maxx = sum;
    }

   
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

      
        if (check(nx, ny) && arr[nx][ny] == '*' && vv[nx][ny] == 0) {
            dfs(nx, ny, sum); 
        }
    }
}

int main() {
   
    cin >> W >> H;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> arr[i][j];
        }
    }

   
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (arr[i][j] == '*' && vv[i][j] == 0) {
                int sum = 0; 
                dfs(i, j, sum); 
            }
        }
    }

   
    cout << maxx << endl;

    return 0;
}