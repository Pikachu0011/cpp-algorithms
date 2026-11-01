//#include<bits/stdc++.h>
//using namespace std;
//queue<int> st;
//
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		int temp;
//		cin >> temp;
//		if (temp == 1) {
//			int temp2;
//			cin >> temp2;
//			st.push(temp2);
//			continue;
//		}
//		else if (!st.empty() && temp == 2) {
//			st.pop();
//		}
//		else if (temp == 3) {
//			int temp2;
//			cin >> temp2;
//			int temp3 = st.front();
//			//cout << temp3 << endl;
//			temp3 = temp3 - temp2;
//			//cout << temp3 << endl;
//			if (temp3 <= 0)
//				st.pop();
//			else {
//				
//				st.front() -= temp2;
//				
//				
//			}
//
//		}
//		else if (temp == 4) {
//			cout << st.front() << endl;
//		}
//	}
//
//	return 0;
//}