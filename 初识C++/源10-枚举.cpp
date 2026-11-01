#include"iostream"
using namespace std;
int main() {

	enum season {
		SPRING,   //0
		SUMMUN,		//1
		AUTUMN,		//2
		WINTER		//3
	};
	int num;
	cout << "ÇëÊäÈëÏ²»¶µÄ¼¾½Ú£¨0£º´º£¬1£ºÏÄ£¬2£ºÇï£¬3£º¶¬£©" << endl;
	cin >> num;
	switch (num) {
		case SPRING:
			cout << "´º" << endl;
			break;
		case SUMMUN:
			cout << "ÏÄ" << endl;
			break;
		case AUTUMN:
			cout << "Çï" << endl;
			break;
		case WINTER:
			cout << "¶¬" << endl;
			break;
		default:
			cout << "Êý×ÖÓÐÎó" << endl;




	}

	return 0;
}