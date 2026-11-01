//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int n;
//int arr[N];
//stack<int> st;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//
//	for (int i = 0; i < n; i++) {
//		int a = arr[i];
//		while (!st.empty() && st.top() >= a)st.pop();
//		if (st.empty()) {
//			cout << "-1 ";
//			st.push(a);
//		}
//		else {
//			cout << st.top() << " ";
//
//			st.push(a);
//		}
//		//cout<<"st.top:"<<st.top()<<endl;
//	}
//
//	return 0;
//}