//#include<bits/stdc++.h>
//using namespace std;
//int n;
//priority_queue<int, vector<int>, greater<int>> h;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		int a;
//		scanf("%d", &a);
//		h.push(a);
//	}
//	int res = 0;
//	while (h.size() > 1) {
//		int a = h.top();
//		h.pop();
//		int b = h.top();
//		h.pop();
//		res = res + a + b;
//		h.push(a + b);
//	}
//	printf("%d", res);
//	return 0;
//}