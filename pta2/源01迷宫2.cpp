//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//int n, m;
//char a[1010][1010];
//int q[1000100][3];
//int b[1010][1010];//记忆化搜索，储存从每个点出发可以到达的格子数
//bool f[1010][1010];//标记已经走过
//int fx[5] = { 0,0,1,0,-1 };
//int fy[5] = { 0,1,0,-1,0 };
//int head = 1, tail = 1;
////我这里是手动实现的队列，对queue熟悉的可以直接用queue解决
//void bfs(int x, int y)
//{
//	head = 1, tail = 1;
//	q[1][1] = x;
//	q[1][2] = y;
//	f[x][y] = true;
//	int tx, ty;
//	while (head <= tail)
//	{
//		int t1 = q[head][1];
//		int t2 = q[head][2];
//		for (int i = 1; i <= 4; i++)
//		{
//			tx = q[head][1] + fx[i];
//			ty = q[head][2] + fy[i];
//			if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && !f[tx][ty] && a[tx][ty] != a[t1][t2])
//			{
//				tail++;
//				q[tail][1] = tx;
//				q[tail][2] = ty;
//				f[tx][ty] = true;
//			}
//		}
//		head++;
//	}
//
//	for (int i = 1; i <= tail; i++)
//	{
//		b[q[i][1]][q[i][2]] = tail;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	memset(f, false, sizeof(f));
//	//预处理，先把每个都求出来，最后查找就是O（1）了
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (b[i][j] == 0)
//				bfs(i, j);
//		}
//	}
//	int x, y;
//	while (m--)
//	{
//		cin >> x >> y;
//		cout << b[x][y] << endl;
//	}
//}