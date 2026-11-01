//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
//vector<int> du;
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int temp1;
//		cin >> temp1;
//		du.push_back(temp1);
//
//	}
//	sort(du.begin(), du.end());
//	int sum1 = 0, sum2 = 0;
//	
//			if(n%2==0)
//				cout << "Outgoing #: " << n / 2 << endl;
//			else
//				cout << "Outgoing #: " << n / 2 + 1<< endl;
//
//			cout << "Introverted #: " << n / 2 << endl;
//
//			for (int i = 0; i < du.size(); i++) {
//				if (i + 1 <= n / 2)
//					sum1 += du[i];
//				else {
//					sum2 += du[i];
//				}
//				
//			}
//			cout << "Diff = " << sum2 - sum1 << endl;
//	
//	
//
//	return 0;
//}
///*else {
//		
//		for (int i = 0; i < du.size(); i++) {
//			if (i + 1 < n / 2 + 1)
//				sum1 += du[i];
//			else if (i + 1 > n / 2 + 1)
//				sum2 += du[i];
//			
//
//		}
//		
//			cout << "Outgoing #: " << n / 2 + 1<< endl;
//
//			cout << "Introverted #: " << n / 2  << endl;
//		
//	}*/