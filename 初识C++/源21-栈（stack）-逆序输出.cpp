#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int>s; //建立一个栈
	for (int i = 1; i <= 10; i++) {
		int a;
		cin >> a;
		s.push(a);//输入元素

	}

	while (s.empty() != 1) {
		cout << s.top();//输出最上面元素
		s.pop();//移除最上面元素
		if (s.empty() != 1)
			cout << " ";


	}

	return 0;
}
/*
1				自上向下输出（s.pop()删除）
2
3
4
5
6
7
8
9
10  自下向上输入
*/