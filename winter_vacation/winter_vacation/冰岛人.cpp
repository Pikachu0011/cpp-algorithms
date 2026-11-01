//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//typedef pair<int, int> pii;
//set<ll> se;
//map<int, char> mp3;//编号 性别
//map<int, string> mp1;//编号 名字
//map<string, int> mp2;//名字 编号
//vector<int> arr(N, 0);//arr[i] 表示i的父亲
//int cnt;
//bool check(string s1, string s2) {
//	set<int> se1;
//	set<int> se2;
//	int id1 = mp2[s1], id2 = mp2[s2];
//	for (int i = 1; i < 5; i++) {
//		se1.insert(id1);
//		if (arr[id1] == 0)break;
//		id1 = arr[id1];
//	}
//	for (int i = 1; i <= 5; i++) {
//		se2.insert(id2);
//		if (arr[id2] == 0)break;
//		id2 = arr[id2];
//	}
//	for (int i : se2) {
//		for (int j : se1) {
//			if (i == j)return false;
//		}
//	}
//	return true;
//}
//void solve() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string a, b;
//		cin >> a >> b;//名 姓
//		if (mp2[a] == 0) {
//			cnt++;
//			mp1[cnt] = a;
//			mp2[a] = cnt;
//		}
//		if (b.find("sson") != string::npos) {
//			string f = b.substr(0, b.size() - 4);
//			if (mp2[f] == 0) {
//				cnt++;
//				mp1[cnt] = f;
//				mp2[f] = cnt;
//			}
//			arr[mp2[a]] = mp2[f];
//			mp3[mp2[a]] = 'm';
//		}
//		else if (b.find("sdottir") != string::npos) {
//			string f = b.substr(0, b.size() - 7);
//			if (mp2[f] == 0) {
//				cnt++;
//				mp1[cnt] = f;
//				mp2[f] = cnt;
//			}
//			arr[mp2[a]] = mp2[f];
//			mp3[mp2[a]] = 'f';
//		}
//		else if (b[b.size() - 1] == 'm') {
//			arr[mp2[a]] = 0;
//			mp3[mp2[a]] = 'm';
//		}
//		else if (b[b.size() - 1] == 'f') {
//			arr[mp2[a]] = 0;
//			mp3[mp2[a]] = 'f';
//		}
//	}
//	int m;
//	cin >> m;
//	while (m--) {
//		string s1, ss1, s2, ss2;
//		cin >> s1 >> ss1 >> s2 >> ss2;
//		if (mp2[s1] == 0 || mp2[s2] == 0)cout << "NA\n";
//		else if (mp3[mp2[s1]] == mp3[mp2[s2]])cout << "Whatever\n";
//		else {
//			if (check(s1, s2))cout << "Yes\n";
//			else cout << "No\n";
//		}
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
//
//
//
//	return 0;
//}