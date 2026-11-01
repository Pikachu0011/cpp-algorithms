//#include<stdio.h>
//#include<iostream>
//using namespace std;
//const int N = 105, MM = 25;
//
//int f[MM], R[MM], M[MM];
//int pages[N], modify[N];
//int fcnt = 0;
//int ptr = 0;
////判断页面是否在物理块
//int findPage(int page) {
//	for (int i = 0; i < fcnt; i++) {
//		if (f[i] == page)return i;
//	}
//	return -1;
//}
////第一轮 R = 0，M = 0;
//int findtype1() {
//	for (int i = 0; i < fcnt; i++) {
//		int pos = (ptr + i) % fcnt;
//		if (R[pos] == 0 && M[pos] == 0) {
//			ptr = (pos + 1) % fcnt;
//			return pos;
//		}
//	}
//	return -1;
//}
////第二轮找R = 0, M = 1,沿途将R置零
//int findtype2() {
//	for (int i = 0; i < fcnt; i++) {
//		int pos = (ptr + i) % fcnt;
//		if (R[pos] == 0 && M[pos] == 1) {
//			ptr = (pos + 1) % fcnt;
//			return pos;
//		}
//		R[pos] = 0;
//	}
//	return -1;
//}
////第三轮重新找type1；
//int findtype1again() {
//	return findtype1();
//}
////第四轮最后找type2
//int findtype2again() {
//	for (int i = 0; i < fcnt; i++) {
//		int pos = (ptr + i) % fcnt;
//		if (R[pos] == 0 && M[pos] == 1) {
//			ptr = (pos + 1) % fcnt;
//			return pos;
//		}
//	}
//	return 0;
//}
////改进性获取淘汰位置
//int getrepos() {
//	int pos;
//	pos = findtype1();
//	if (pos != -1)return pos;
//	pos = findtype2();
//	if (pos != -1)return pos;
//	pos = findtype1again();
//	if (pos != -1)return pos;
//	return findtype2again();
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> pages[i];
//	for (int i = 0; i < n; i++)cin >> modify[i];
//	int miss = 0;
//	for (int i = 0; i < n; i++) {
//		int page = pages[i];
//		int md = modify[i];
//		int pos = findPage(page);
//		if (pos != -1) {
//			R[pos] = 1;
//			continue;
//		}
//		miss++;
//		if (fcnt < m) {
//			f[fcnt] = page;
//			R[fcnt] = 1;
//			M[fcnt] = md;
//			fcnt++;
//		}
//		else {
//			int rep = getrepos();
//			f[rep] = page;
//			R[rep] = 1;
//			M[rep] = md;
//		}
//	}
//	int rate = miss * 100 / n;
//	cout << miss << " " << rate << endl;
//	return 0;
//}