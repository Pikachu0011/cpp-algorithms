//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//vector<int> chang;
//vector<string> arr;
//map<string, int> mp;//学校 监考人数
//struct e {
//	string s;//学校
//	int num;//人数
//};
//struct cmp {
//	bool operator()(e a, e b) {
//		return a.num < b.num;
//	}
//};
//void solve() {
//	int n, c;
//	cin >> n >> c;
//	priority_queue<e, vector<e>, cmp> pq;
//
//	for (int i = 1; i <= n; i++) {
//		string name;
//		int num;
//		cin >> name >> num;
//		arr.push_back(name);//保存输入顺序
//		pq.push({ name,num });
//	}
//	while (!pq.empty()) {
//		auto t = pq.top();
//		pq.pop();
//		if (t.num > c) {
//			mp[t.s]++;
//			chang.push_back(c);
//			t.num -= c;
//			pq.push(t);
//		}
//		else if (t.num == c) {
//			mp[t.s]++;
//			chang.push_back(c);
//		}
//		else if (t.num < c) {
//			mp[t.s]++;
//			bool flag = 0;
//			for (int i = 0; i < chang.size(); i++) {
//				if (c - chang[i] >= t.num) {
//					chang[i] += t.num;
//					flag = 1;
//					break;
//				}
//			}
//			if (!flag) {
//				chang.push_back(t.num);
//			}
//		}
//	}
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i] << " " << mp[arr[i]] << endl;
//	}
//	cout << chang.size() << endl;
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