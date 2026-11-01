//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e4;
//const int M = 1e4;
//int v[N];//礼物
//int e[M];//村民期望
//int main() {
//	int n, m;
//	cin >> n;//村民
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		e[i] = temp;
//	}
//	cin >> m;//礼物
//	for (int i = 0; i < m; i++) {
//		int temp;
//		cin >> temp;
//		v[i] = temp;
//	}
//	int count = 0;
//    int index = 0;
//
//	for (int i = 0; i < n; i++) {
//        while (index < m) {
//            if (v[index] >= e[i]) {
//                count++;
//                index++;
//                break;
//            }
//            index++;
//        }
//        if (index >= m) {
//            break;
//        }
//		
//
//	}
//	cout << count << endl;
//	return 0;
//}
//    