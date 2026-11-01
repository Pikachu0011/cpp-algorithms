//#include<bits/stdc++.h>
//using namespace std;
//struct person {
//	string name;
//	int count;
//	double ave;
//
//};
//
//bool cmp(person a, person b) {
//	if (a.count == b.count)
//		return a.ave < b.ave;
//	return a.count > b.count;
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<person> p;
//
//	for (int i = 0; i < n; i++) {
//		set<int> se;
//		string ss;
//		cin >> ss;
//		int k;
//		cin >> k;
//		for (int j = 1; j <= k; j++) {
//			int temp;
//			cin >> temp;
//			se.insert(temp);
//
//		}
//		person per;
//		per.name = ss;
//		per.count = se.size();
//		per.ave = 1.0 * k / per.count;
//		p.push_back(per);
//
//		
//	}
//	sort(p.begin(), p.end(), cmp);
//	for (int i = 0; i < 3; i++) {
//		if (i != 0)
//			cout << " ";
//		if (i  < p.size())
//			cout << p[i].name;
//		else
//			cout << "-";
//	}
//
//	return 0;
//}