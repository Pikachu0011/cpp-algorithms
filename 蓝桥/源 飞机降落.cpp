//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//int t[N], d[N], l[N];
//int a[N];
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//			cin >> t[i] >> d[i] >> l[i];
//		for (int i = 1; i <= n; i++)
//			a[i] = i;
//		bool flag = false;
//		do
//		{
//			int now = 0;
//			for (int i = 1; i <= n; i++)
//			{
//				if (now <= t[a[i]] + d[a[i]])
//					now = l[a[i]] + max(now, t[a[i]]);
//				else
//					break;
//				if (i == n) flag = true;
//			}
//			if (flag) break;
//		} while (next_permutation(a + 1, a + n + 1));//È«ÅÅÁÐº¯Êý
//		if (flag) puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}
