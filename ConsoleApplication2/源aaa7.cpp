//#include<bits/stdc++.h>
//using namespace std;
//int wsh(int num) {
//	int sum = 1;
//	while (num != 0) {
//		int temp = num % 10;
//		sum *= temp;
//		num /= 10;
//	}
//	return sum;
//}
//vector<int> ve;
//int mbu = 0;
//void dfs(int root, int num, int bu) {
//	if (num >= 0 && num <= 9) {
//		if (bu > mbu) {
//			mbu = bu;
//			ve.clear();
//			ve.push_back(root);
//		}
//		else if (bu == mbu) {
//			ve.push_back(root);
//		}
//		return;
//		
//	}
//	
//	dfs(root, wsh(num), bu + 1);
//	
//}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++) {
//		dfs(i, wsh(i), 1);
//	}
//	cout << mbu << endl;
//	for (int i = 0; i < ve.size(); i++) {
//		if (i != 0)cout << " ";
//		cout << ve[i];
//	}
//	//cout << wsh(679) << endl;
//	
//	return 0;
//}