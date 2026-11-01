//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int sex[55];//0:Å®Éú£¬1£ºÄÐÉú
//	string name[55];
//	for (int i = 0; i < n; i++) {
//		cin >> sex[i] >> name[i];
//
//	}
//	for (int i = 0; i < n/2; i++) {
//		for (int j = n - 1; j >= 0; j--) {
//			if (sex[i]==0&&sex[j]==1||sex[i]==1&&sex[j]==0) {
//				cout << name[i] << " " << name[j] << endl;
//				sex[i] = 2;
//				sex[j] = 2;
//
//				
//			}
//		}
//	}
//
//	return 0;
//}