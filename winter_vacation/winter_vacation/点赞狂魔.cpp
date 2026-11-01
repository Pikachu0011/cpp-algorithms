//#include<bits/stdc++.h>
//using namespace std;
//struct per{
//	string name;
//	int num;
//	double avg;
//};
//bool cmp(per a, per b) {
//	if (a.num == b.num)return a.avg < b.avg;
//	else return a.num > b.num;
//}
//void solve() {
//	int n;
//	cin >> n;
//	vector<per> arr;
//	while (n--) {
//		string nam;
//		int cnt;
//		set<int> se;
//		cin >> nam >> cnt;
//		for (int i = 1; i <= cnt; i++) {
//			int x;
//			cin >> x;
//			se.insert(x);
//		}
//		per stu;
//		stu.name = nam;
//		stu.num = se.size();
//		stu.avg = (double)cnt / se.size();
//		arr.push_back(stu);
//	}
//	int i;
//	sort(arr.begin(), arr.end(), cmp);
//	for (i = 0; i < arr.size(); i++) {
//		if (i != 0)cout << " ";
//		cout << arr[i].name;
//		if (i == 2)break;
//	}
//	int t = i;
//	for (; t <= 2; t++) {
//		cout << " ";
//		cout << "-";
//	}
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int t = 1;
//	//cin >> t;
//	while (t--)solve();
//	return 0;
//}