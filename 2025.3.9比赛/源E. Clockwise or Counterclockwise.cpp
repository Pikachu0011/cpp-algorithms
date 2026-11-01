//#include<bits/stdc++.h>
//using namespace std;
//int n;
//
//long long cha(long long x1, long long y1, long long  x2, long long  y2) {
//	return x1 * y2 - x2 * y1;
//}
//int main() {
//	cin >> n;
//	while (n--) {
//		long long  ax, ay, bx, by, cx, cy;
//		cin >> ax >> ay >> bx >> by >> cx >> cy;
//		//ab*ac
//		long long abx = bx - ax;
//		long long aby = by - ay;
//		long long acx = cx - ax;
//		long long acy = cy - ay;
//		if (cha(abx, aby, acx, acy) > 0) {
//			cout << "Counterclockwise" << endl;
//		}
//		else {
//			cout << "Clockwise" << endl;
//		}
//	}
//	return 0;
//}