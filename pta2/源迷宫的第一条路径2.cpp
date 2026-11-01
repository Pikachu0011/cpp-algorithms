//#include<bits/stdc++.h>
//using namespace std;
//int n, sum = 0;
//char a[1005][1005];
//int dx[4] = { 0,-1,0,1 };
//int dy[4] = { -1,0,1,0 };
//char vt[1005][1005];
//int r[405][3];
//bool check(int x, int y)
//{
//	return (x >= 1 && x <= n && y >= 1 && y <= n);
//}
//void dfs(int x, int y, int step)
//{
//	r[step][1] = x;
//	r[step][2] = y;
//	if (x == n && y == n)
//	{
//		for (int i = 2; i <= step; i++)
//			cout << "->(" << r[i][1] << "," << r[i][2] << ")";
//		return;
//	}
//	for (int k = 0; k < 4; k++)
//	{
//		int tx = x + dx[k];
//		int ty = y + dy[k];
//		if (check(tx, ty) && vt[tx][ty] != '1')
//		{
//			vt[tx][ty] = '1';
//			dfs(tx, ty, step + 1);
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//			vt[i][j] = a[i][j];
//		}
//	vt[1][1] = '1';
//	cout << "(1,1)";
//	dfs(1, 1, 1);
//	return 0;
//}
