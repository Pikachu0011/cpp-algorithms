#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	stack<char> st;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			st.push(')');
		else if (str[i] == '{')
			st.push('}');
		else if (str[i] == '[')
			st.push(']');
		else if (st.empty() || st.top() != str[i]) {
			cout << "no" << endl;
			return 0;
		}
		else
			st.pop();


	}
	if (st.empty())
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
/*
({()}[]遍历完栈有剩余

{()}[]))未遍历完成栈为空

{(})[] 存在交叉，不能匹配
*/