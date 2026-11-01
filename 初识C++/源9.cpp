#include"iostream"
using namespace std;
int main() {
	int h;
	cout << "欢迎来到黑马动物园" << endl;
	cout << "请输入您的身高（cm）：" ;
	cin >> h;
	if (h > 120) {
		cout << "您的身高超过120cm，游玩需要购票10元。" << endl;

	}
	else {
		cout << "您的身高未超出120cm，可以免费游玩." << endl;
	}
	cout << "祝您游玩愉快。" << endl;

	return 0;
}