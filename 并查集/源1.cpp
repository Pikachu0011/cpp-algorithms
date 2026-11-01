//#include<bits/stdc++.h>
//using namespace std;
//int bin[1002];
//int findx(int x) {//查找“老大”
//	int r = x;
//	while (bin[r] != r)
//		r = bin[r];
//	return r;
//}
//void merge(int x, int y) {//合并“集合”
//	int fx, fy;
//	fx = findx(x);
//	fy = findx(y);
//	if (fx != fy) {
//		bin[fx] = fy;
//
//	}
//}
//
//int main() {
//	int n, m;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		bin[i] = i;//自己的老大是自己（n个集合）
//	for (cin >> m; m > 0; m--) {//m条道路
//		int x, y;
//		cin >> x >> y;
//		merge(x, y);//合并集合
//
//	}
//	int count;
//	int i;
//	for (count = -1, i = 1; i <= n; i++) {
//		if (bin[i] == i)
//			count++;//需要再修的道路数==集合数-1；所以count初始化为-1；
//	}
//	cout << count << endl;//输出需要再修的道路数
//	return 0;
//}
////5 3//bin[3]=5;
////1 2
////3 4
////2 5
////1 2 5
////3 4