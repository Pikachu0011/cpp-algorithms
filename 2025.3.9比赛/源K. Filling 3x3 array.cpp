//#include<bits/stdc++.h>
//using namespace std;
//int h1, h2, h3, w1, w2, w3;
//int cnt = 0;
//int main() {
//	cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
//	for (int a = 1; a < h1 && a < w1; a++) {
//		for (int b = 1; a + b < h1; b++) {
//			int c = h1 - a - b;
//			for (int d = 1; d < h2; d++) {
//				for (int e = 1; e < h2 - d; e++) {
//					int f = h2 - d - e;
//					for (int g = 1; g < h3; g++) {
//						for (int h = 1; h + g < h3; h++) {
//							int i = h3 - g - h;
//							if (a + d + g == w1 && b + e + h == w2 && c + f + i == w3)
//								cnt++;
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}