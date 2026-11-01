#include<bits/stdc++.h>
using namespace std;
int w, h;
char a[85][85];
int vv[85][85] = { 0 };
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<int> qx, qy;
int gucang = 0;
int nainiu = 0;
bool check(int x, int y)
{
    return (x >= 1 && x <= h && y >= 1 && y <= w);
}
int minr = 99, minc = 99, maxr = 0, maxc = 0;//rÐÐcÁÐ
int main()
{
    cin >> h >> w;

    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
        {
            cin >> a[i][j];
        }

    //int max = 0;
    //int ans = 0;
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
        {
            if (a[i][j] == '#') {
                qx.push(i);
                qy.push(j);
                minr = i;
                minc = j;
                maxr = i;
                maxc = j;
                a[i][j] = '.';
                vv[i][j] = 1;
                //ans = 1;
                int num1 = -1;
                while (1)
                {
                    
                    int num = qx.size();
                    if (num == 0 && num1==1) {
                        num1 = 0;
                        int count = 0;
                        int flag = 0;
                        for (int iii = minr; iii <= maxr; iii++) {
                            if (vv[iii][minc] == 1)
                                count++;
                            if (vv[iii][maxc] == 1)
                                count++;
                        }
                        for (int iii = minc; iii <= maxc; iii++) {
                            if (vv[minr][iii] == 1)
                                count++;
                            if (vv[maxr][iii] == 1)
                                count++;
                        }
                        /*for (int iii = minr; iii <= maxr; iii++) {
                            for (int jjj = minc; jjj <= maxc; jjj++) {
                                if (vv[iii][jjj] == 0) {
                                    flag = 1;
                                    break;
                                }
                                count++;

                            }
                            if (flag == 1)
                                break;
                        }*/
                        if (count == (maxr - minr + 1) * 2 + (maxc - minc + 1) * 2)
                            gucang++;
                        else
                            nainiu++;

                        break;
                    }

                    for (int ii = 0; ii < num; ii++)
                    {

                        for (int jj = 0; jj < 4; jj++)
                        {
                            int tx = qx.front() + dx[jj];
                            int ty = qy.front() + dy[jj];
                            if (check(tx, ty) && a[tx][ty] == '#')
                            {
                                if (tx < minr)
                                    minr = tx;
                                if (ty < minc)
                                    minc = ty;
                                if (tx > maxr)
                                    maxr = tx;
                                if (ty > maxc)
                                    maxc = ty;
                                qx.push(tx);
                                qy.push(ty);
                                a[tx][ty] = '.';
                                vv[tx][ty] = 1;
                                //ans++;
                            }
                        }

                        qx.pop();
                        qy.pop();
                        num1 = 1;
                    }
                }

                /* if (ans > max)
                     max = ans;*/
            }
        }

    //cout << max << endl;
    cout << gucang << endl;
    cout << nainiu << endl;
    return 0;
}

