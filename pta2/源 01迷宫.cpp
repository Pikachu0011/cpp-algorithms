#include<bits/stdc++.h>
using namespace std;
int n, m;
char a[1005][1005];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int vt[1005][1005];
queue<int> qx, qy;
bool check(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= m);
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    int ans = 0;
    int max = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {

            if (vt[i][j] == 0)
            {

                qx.push(i);
                qy.push(j);
                vt[i][j] = 1;
                ans = 1;
                while (1)
                {
                    int num = qx.size();
                    if (num == 0)
                    {
                        break;
                    }

                    for (int i = 0; i < num; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            int tx = qx.front() + dx[j];
                            int ty = qy.front() + dy[j];
                            if (check(tx, ty) && a[qx.front()][qy.front()] == a[tx][ty] && vt[tx][ty] != 1)  //vt[tx][ty]!=1 必须验证否则会传回去 
                            {
                                qx.push(tx);
                                qy.push(ty);
                                vt[tx][ty] = 1;
                                ans++;
                            }
                        }
                        qx.pop();
                        qy.pop();
                    }
                }
                if (ans > max)
                    max = ans;
            }
        }
    cout << max << endl;
    return 0;
}
