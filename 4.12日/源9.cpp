//#include<bits/stdc++.h>
//using namespace std;
//int n, m, S_max;
//vector<char> liu;
//queue<char> bao[105];
//stack<char> kuang;
//int main() {
//	cin >> n >> m >> S_max;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			char t;
//			cin >> t;
//			bao[i].push(t);
//		}
//	}
//	int nn;
//	while (1) {
//		cin >> nn;
//		if (nn == -1)break;
//		if (nn == 0 && kuang.size() < S_max && !kuang.empty()) {
//			liu.push_back(kuang.top());
//			kuang.pop();
//		}
//		else {
//			if (kuang.size() >= S_max) {
//				liu.push_back(kuang.top());
//				kuang.pop();
//			}
//			if (!bao[nn].empty()) {
//				kuang.push(bao[nn].front());
//				bao[nn].pop();
//			}
//			
//		}
//	}
//	for (int i = 0; i < liu.size(); i++) {
//		cout << liu[i];
//	}
//	return 0;
//}