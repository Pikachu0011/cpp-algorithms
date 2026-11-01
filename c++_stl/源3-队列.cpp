#include<bits/stdc++.h>
using namespace std;
int main() {
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	cout << que.front() << endl;//输出队首1
	cout << que.back() << endl;//输出队尾3
	que.pop();//出队(队首)
	cout << que.front() << endl;//输出队首2
	cout << que.back() << endl;//输出队尾3
	cout << que.size() << endl;//长度2
	cout << que.empty() << endl;// 判空0
	return 0;
}
//不能访问内部元素