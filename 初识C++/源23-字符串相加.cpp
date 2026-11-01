#include<iostream>
#include<string>

using namespace std;
string connect(string x, string y) {
	string z = x + y;
	return z;
}
int main() {
	string a, b, c;
	cin >> a >> b;
	c = connect(a, b);
	cout << c;
	return 0;
}