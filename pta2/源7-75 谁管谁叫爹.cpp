//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		string a, b;
//		cin >> a >> b;
//		int na = stoi(a);
//		int nb = stoi(b);
//		//cout << na << " " << nb << endl;
//		int suma = 0, sumb = 0;
//		for (int i = 0; i < a.size(); i++) {
//			suma += (a[i] - '0');
//		}
//		for (int i = 0; i < b.size(); i++) {
//			sumb += (b[i] - '0');
//		}
//		//cout << suma << " " << sumb << endl;
//		if (na % sumb == 0 && nb % suma != 0) {
//			cout << "A" << endl;
//		}
//		else if (nb % suma == 0 && na % sumb != 0) {
//			cout << "B" << endl;
//		}
//		else {
//			if (na > nb) {
//				cout << "A" << endl;
//			}
//			else {
//				cout << "B" << endl;
//			}
//		}
//	}
//
//	return 0;
//}