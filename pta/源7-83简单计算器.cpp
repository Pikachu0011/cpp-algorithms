//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	stack<int> num;
//	stack<char> fu;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int temp;
//		cin >> temp;
//		num.push(temp);
//	}
//	for (int i = 1; i <= n - 1; i++) {
//		char temp;
//		cin >> temp;
//		fu.push(temp);
//	}
//	int ans;
//	for (int i = 1; i <= n - 1; i++) {
//		int n2 = num.top();
//		num.pop();
//		int n1 = num.top();
//		num.pop();
//		char c = fu.top();
//		fu.pop();
//		if (c == '+')
//			ans = n1 + n2;
//		else if (c == '-')
//			ans = n1 - n2;
//		else if (c == '*')
//			ans = n1 * n2;
//		else if (c == '/') {
//			if (n2 == 0) {
//				cout << "ERROR: " << n1 << "/0" << endl;
//				return 0;
//			}
//			ans = n1 / n2;
//		}
//		num.push(ans);
//	}
//	cout << ans << endl;
//	return 0;
//}