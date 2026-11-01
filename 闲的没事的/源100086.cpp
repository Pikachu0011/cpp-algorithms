#include<bits/stdc++.h>
using namespace std;
class base {
public:
	base {
		x = i;
		cout << "基类构造函数" << endl;
	}
	~base() {
		cout << "基类析构函数" << endl;
	}
	void show() {
		cout << x << endl;
	}
	friend base operator+(base& a, base& b) {
		base t;
		t.r = a.r + b.r;
		t.i = a.i + b.i;
		return t;
	}
private:
	int x;
	int r;
	int i;
};
class paisheng : public base {
public:
	paisheng(int i) :base(i) ,d(i){
		cout << "派生类构造函数" << endl;
	}
	~paisheng() {
		cout << "派生类析构函数" << endl;
	}
private:
	base d;

};
int main() {
	paisheng obj(5);
	obj.show();	


	return 0;
}