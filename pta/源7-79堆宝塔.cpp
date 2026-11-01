//#include<bits/stdc++.h>
//using namespace std;
//stack<int> st_a;
//stack<int> st_b;
//
//int main() {
//	int n;
//	cin >> n;
//	int count = 0;
//	//int count_b = 0;
//	//int flag = 0;
//	int maxx = 0;
//	//vector<int> h;
//	for (int i = 1; i <= n; i++) {
//		int c;
//		cin >> c;
//		if (st_a.empty()) {
//			st_a.push(c);
//			
//		}
//		else {
//			if (c < st_a.top()) {
//				st_a.push(c);
//				
//
//			}
//			else if (st_b.empty() ||  st_b.top() < c) {
//				st_b.push(c);
//				//count_b++;
//			}
//			else {
//				if (st_a.size() > maxx) {
//					maxx = st_a.size();
//				}
//				while (!st_a.empty()) {
//					st_a.pop();
//				}
//				count++;
//				while (!st_b.empty() && st_b.top() > c) {
//					st_a.push(st_b.top());
//					st_b.pop();
//				}
//				st_a.push(c);
//				
//			}
//		}
//		
//
//	}
//	if (st_b.size() > maxx) {
//		maxx = st_b.size();
//	}
//	if (st_a.size() > maxx) {
//		maxx = st_a.size();
//	}
//	if (!st_a.empty()) {
//		count++;
//	}
//	if (!st_b.empty()) {
//		count++;
//	}
//	
//	cout << count << " " << maxx << endl;
//	return 0;
//}