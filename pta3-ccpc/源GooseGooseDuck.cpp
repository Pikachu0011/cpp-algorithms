//#include<bits/stdc++.h>
//using namespace std;
//struct person {
//	int l;
//	int r;
//	int ii;
//
//};
//vector<person> arr;
//bool cmp(person a, person b) {
//	if (a.r != b.r)return a.r < b.r;
//	else return a.l < b.l;
//
//}
//int n;
//const int N = 1e7;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		person temp;
//		temp.ii = i;
//		cin >> temp.l >> temp.r;
//		arr.push_back(temp);
//	}
//	sort(arr.begin(), arr.end(), cmp);
//	int cnt = 0;
//	if (arr[0].l == 0)cnt = 1;
//	
//	for (int i = 1; i < n; i++) {
//		if (arr[i].r >= cnt && arr[i].l <= cnt) {
//			cnt++;
//			
//
//		}
//		else {
//			arr[i].l = -1;
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 0; i < n; i++) {
//		if (i != 0)cout << " ";
//		if(arr[i].l != -1)
//			cout << arr[i].ii ;
//	}
//
//	return 0;
//}