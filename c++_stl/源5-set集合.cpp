//#include<bits/stdc++.h>
////#include <unordered_set>
//
//using namespace std;
//int main() {
//	/*unordered_*/set <int> st;
//					//互异性，有序性
//	st.insert(1);
//	st.insert(4);
//	st.insert(4);
//	st.insert(2);
//	st.insert(3);//插入；
//	//st.erase(4);//删除
//	if (st.find(1) != st.end()) {//find()返回迭代器，未找到返回尾迭代器。
//		cout << "yes" << endl;
//
//	}
//	cout << st.count(1) << endl;//返回该数的个数。
//	cout << endl;
//	for (set<int>::iterator it = st.begin(); it != st.end(); ++it)
//		cout << *it << endl;
//	cout << endl;
//	for (auto & ele : st) {
//		cout << ele << endl;
//	} 
//	cout << endl;
//	cout << st.size() << endl;//查看大小
//	cout << endl;
//	st.clear();//清空
//	cout << st.empty() << endl;//判空。
//	return 0;
//}