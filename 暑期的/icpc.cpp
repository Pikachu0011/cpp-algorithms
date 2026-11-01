//#include<bits/stdc++.h>
//using namespace std;
//const int maxn = 1e5 + 5;
//int t, n, id;
//map<string, int>mp;
//map<pair<string, string>, int>m;
//map<pair<string, string>, int>tim;
//string school[maxn];
//vector<string>ans;
//struct ed {
//	string name, tm, s;
//	int x;
//}op[maxn];
//struct node {
//	int cnt, pt, id;
//}mx[maxn], mn[maxn];
//bool cmp(node x, node y) {
//	if (x.cnt == y.cnt) return x.pt < y.pt;
//	return x.cnt > y.cnt;
//}
//bool cmp1(ed x, ed y) {
//	return x.x < y.x;
//}
//void solve() {
//	cin >> n;
//	mp.clear(); ans.clear(); m.clear(); tim.clear();
//	id = 0;
//	for (int i = 1; i <= n; i++) {
//		mx[i].cnt = mn[i].cnt = 0;
//		mx[i].pt = mn[i].pt = 0;
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> op[i].name >> op[i].tm >> op[i].x >> op[i].s;
//	}
//	sort(op + 1, op + n + 1, cmp1);
//	for (int i = 1; i <= n; i++) {
//		string name, tm; int x; string s;
//		//cin>>name>>tm>>x>>s;
//		name = op[i].name; tm = op[i].tm; x = op[i].x; s = op[i].s;
//		if (!mp[name]) {
//			mp[name] = ++id;
//			school[id] = name;
//			mx[id].id = id;
//			mn[id].id = id;
//		}
//		if (s == "Accepted" && (!m[make_pair(name, tm)])) {
//			//cout<<school[id]<<endl;
//			int pos = mp[name];
//			mx[pos].cnt++; mx[pos].pt += x;
//			mx[pos].pt += tim[make_pair(name, tm)];
//			mn[pos].cnt++; mn[pos].pt += x;
//			mn[pos].pt += tim[make_pair(name, tm)];
//			m[make_pair(name, tm)] = 1;
//		}
//		else if (s == "Rejected" && (!m[make_pair(name, tm)])) {
//			//int pos=mp[name];
//			//m[make_pair(name,tm)]=1;
//			tim[make_pair(name, tm)] += 20;
//		}
//		else {
//			//cout<<school[id]<<endl;
//			int pos = mp[name];
//			if (!m[make_pair(name, tm)]) {
//				m[make_pair(name, tm)] = 1;
//				mx[pos].cnt++; mx[pos].pt += x;
//				mx[pos].pt += tim[make_pair(name, tm)];
//			}
//			tim[make_pair(name, tm)] += 20;
//		}
//	}
//	//sort(mx+1,mx+id+1,cmp);
//	sort(mn + 1, mn + id + 1, cmp);
//	for (int i = 1; i <= id; i++) {
//		//cout<<"mx:"<<school[mx[i].id]<<' '<<mx[i].cnt<<' '<<mx[i].pt<<endl;
//		//cout<<"mn:"<<school[mn[i].id]<<' '<<mn[i].cnt<<' '<<mn[i].pt<<endl;
//		if (mn[1].id == mx[i].id) {
//			ans.push_back(school[mx[i].id]);
//		}
//		else {
//			if (mx[i].cnt > mn[1].cnt || (mx[i].cnt == mn[1].cnt && mx[i].pt <= mn[1].pt)) {
//				ans.push_back(school[mx[i].id]);
//			}
//		}
//	}
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++) {
//		cout << ans[i] << ' ';
//	}
//	cout << endl;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//	return 0;
//}