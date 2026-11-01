//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int heap[10010];
//void ad(int x, int max) {
//	int i = x, j = 2 * i;
//	while (j <= max) {
//		if (j + 1 <= max && heap[j + 1] < heap[j])j = j + 1;
//		if (heap[j] < heap[i]) {
//			swap(heap[j], heap[i]);
//			i = j;
//			j = 2 * i;
//		}
//		else break;
//	}
//}
//void creatheap(int n) {
//	for (int i = n / 2; i >= 1; i--)
//		ad(i, n);
//}
//int find(int x) {
//	for (int i = 1; i <= n; i++) {
//		if (x == heap[i])return i;
//	}
//	return 0;
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> heap[i];
//		int k = i;
//		while (k > 1 && heap[k] < heap[k / 2]) {
//			swap(heap[k], heap[k / 2]);
//			k /= 2;
//		}//ÉÏ¸¡£»
//	}
//	while (m--) {
//		int x;
//		cin >> x;
//		string s;
//		cin >> s;
//		if (s == "is") {
//			string ss;
//			cin >> ss;
//			if (ss == "the") {
//				string sss;
//				cin >> sss;
//				if (sss == "root") {
//					if (heap[1] == x)cout << "T\n";
//					else cout << "F\n";
//				}
//				else if (sss == "parent") {
//					string s1;
//					int xx;
//					cin >> s1 >> xx;
//					if (find(x) == find(xx) / 2)cout << "T\n";
//					else cout << "F\n";
//				}
//			}
//			else if (ss == "a") {
//				string s1, s2;
//				int xx;
//				cin >> s1 >> s2 >> xx;
//				if (find(x) / 2 == find(xx))cout << "T\n";
//				else cout << "F\n";
//			}
//		}
//		else if (s == "and") {
//			int xx;
//			string s1, s2;
//			cin >> xx >> s1 >> s2;
//			if (find(x) / 2 == find(xx) / 2)cout << "T\n";
//			else cout << "F\n";
//		}
//	}
//
//	return 0;
//}