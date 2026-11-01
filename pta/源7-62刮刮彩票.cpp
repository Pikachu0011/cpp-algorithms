//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int arr[4][4];
//	int sum = 0;
//	for (int i = 1; i <= 3; i++) {
//		for (int j = 1; j <= 3; j++) {
//			cin >> arr[i][j] ;
//			sum += arr[i][j];
//		}
//		
//	}
//	int ch = 45 - sum;
//	cout << ch << endl;
//	for (int i = 1; i <= 3; i++) {
//		for (int j = 1; j <= 3; j++) {
//			if (arr[i][j] == 0) {
//				arr[i][j] = ch;
//			}
//				
//		}
//
//	}
//	for (int i = 1; i <= 3; i++) {
//		int x, y;
//		cin >> x >> y;
//		cout << arr[x][y] << endl;
//	}
//	int tong[25];
//	tong[6] = 10000;
//	tong[7] = 36;
//	tong[8] = 720;
//	tong[9] = 360;
//	tong[10] = 80;
//	tong[11] = 252;
//	tong[12] = 108;
//	tong[13] = 72;
//	tong[14] = 54;
//	tong[15] = 180;
//	tong[16] = 72;
//	tong[17] = 180;
//	tong[18] = 119;
//	tong[19] = 36;
//	tong[20] = 306;
//	tong[21] = 1080;
//	tong[22] = 144;
//	tong[23] = 1800;
//	tong[24] = 3600;
//
//	int flag;
//	cin >> flag;
//	int index;
//	if (flag == 1)
//		index = arr[1][1] + arr[1][2] + arr[1][3];
//	if (flag == 2)
//		index = arr[2][1] + arr[2][2] + arr[2][3];
//	if (flag == 3)
//		index = arr[3][1] + arr[3][2] + arr[3][3];
//	if (flag == 4)
//		index = arr[1][1] + arr[2][1] + arr[3][1];
//	if (flag == 5)
//		index = arr[1][2] + arr[2][2] + arr[3][2];
//	if (flag == 6)
//		index = arr[1][3] + arr[2][3] + arr[3][3];
//	if (flag == 7)
//		index = arr[1][1] + arr[2][2] + arr[3][3];
//	if (flag == 8)
//		index = arr[1][3] + arr[2][2] + arr[3][1];
//	cout << tong[index] << endl;
//
//	return 0;
//}