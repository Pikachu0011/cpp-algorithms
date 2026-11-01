//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//int arr[10][10];
//bool check1() {
//	map<int, int> mp;
//	for (int i = 1; i <= 3; i++) {		
//		for (int j = 1; j <= 3; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check2() {
//	map<int, int> mp;
//	for (int i = 1; i <= 3; i++) {	
//		for (int j = 4; j <= 6; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check3() {
//	map<int, int> mp;
//	for (int i = 1; i <= 3; i++) {
//		for (int j = 7; j <= 9; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check4() {
//	map<int, int> mp;
//	for (int i = 4; i <= 6; i++) {
//		for (int j = 1; j <= 3; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check5() {
//	map<int, int> mp;
//	for (int i = 4; i <= 6; i++) {
//		for (int j = 4; j <= 6; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check6() {
//	map<int, int> mp;
//	for (int i = 4; i <= 6; i++) {
//		for (int j = 7; j <= 9; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check7() {
//	map<int, int> mp;
//	for (int i = 7; i <= 9; i++) {
//		for (int j = 1; j <= 3; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check8() {
//	map<int, int> mp;
//	for (int i = 7; i <= 9; i++) {
//		for (int j = 4; j <= 6; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//bool check9() {
//	map<int, int> mp;
//	for (int i = 7; i <= 9; i++) {
//		for (int j = 7; j <= 9; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else return false;
//			if (arr[i][j] < 1 || arr[i][j]>9)return false;
//		}
//	}
//	return true;
//}
//void solve() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	bool flag = 1;
//	for (int i = 1; i <= 9; i++) {//检查每一行
//		map<int, int> mp;
//		for (int j = 1; j <= 9; j++) {
//			if (mp[arr[i][j]] == 0)mp[arr[i][j]] = 1;
//			else flag = 0;
//			if (arr[i][j] < 1 || arr[i][j]>9)flag = 0;
//		}
//	}
//	for (int i = 1; i <= 9; i++) {//检查每一列
//		map<int, int> mp;
//		for (int j = 1; j <= 9; j++) {
//			if (mp[arr[j][i]] == 0)mp[arr[j][i]] = 1;
//			else flag = 0;
//			if (arr[j][i] < 1 || arr[j][i]>9)flag = 0;
//		}
//	}
//	if (!check1())flag = 0;
//	if (!check2())flag = 0;
//	if (!check3())flag = 0;
//	if (!check4())flag = 0;
//	if (!check5())flag = 0;
//	if (!check6())flag = 0;
//	if (!check7())flag = 0;
//	if (!check8())flag = 0;
//	if (!check9())flag = 0;
//	if (flag)cout << 1 << endl;
//	else cout << 0 << endl;
//}
//int main() {
//	int t;
//	cin >> t;
//	while(t--)solve();
//	return 0;
//}
