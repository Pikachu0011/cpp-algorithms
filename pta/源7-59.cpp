//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	getchar();
//	//n减到0循环停止
//	while (n--) {
//		string str;
//		getline(cin, str);
//		cout << str << endl << "AI: ";
//		//消除原文中多余的空格；
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] == ' ') {
//				while (str[i + 1] == ' ')
//					str.erase(i + 1, 1);
//			}
//		}
//		//将行首行尾都添加一个空格
//		str = ' ' + str + ' ';
//		//将大写字母变成小写
//		for (int i = 0; i < str.size(); ++i) {
//			if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'I') {
//				str[i] = str[i] - 'A' + 'a';//!!
//
//			}
//
//		}
//		//把非数字、空格 、字母 （仅符号）前后加一个空格《让所有符号独立》
//		for (int i = 0; i < str.size(); ++i) {
//			if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ' && !(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')) {
//				str.insert(i, " ");
//				str.insert(i + 2, " ");
//				i += 2;
//			}
//		}
//		/*3.1 思路
//					先can/could you ———> A can/could（为什么要先变成A？因为如果直接变成I 要求四中I又会变成you了）
//					再完成I/me ———> you后
//					最后将A ——>I
//		*/
//		while (str.find(" can you ") != -1)
//			str = str.replace(str.find(" can you "), 9, " A can ");//修改后的字符串重新赋值给str.
//		while (str.find(" could you ") != -1)
//			str = str.replace(str.find(" could you "), 11, " A could ");
//		while (str.find(" I ") != -1)
//			str = str.replace(str.find(" I "), 3, " you ");
//		while (str.find(" me ") != -1)
//			str = str.replace(str.find(" me "), 4, " you ");
//		while (str.find(" A ") != -1)
//			str = str.replace(str.find(" A "), 3, " I ");
//
//			
//		//将“？”改为“！”
//		for (int i = 0; i < str.size(); ++i) {
//			if (str[i] == '?') {
//				str[i] = '!';
//
//			}
//
//		}
//		/*消除多余空格（首尾删除多余空格，单词间只需要一个空格，标点符号前后空格）*/
//		while (str[0] == ' ')
//			str.erase(0, 1);
//		while (str[str.size() - 1] == ' ')
//			str.erase(str.size() - 1, 1);
//		//删除标点前后空格
//		for (int i = 0; i < str.size(); ++i) {
//			if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ' && (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i]>'z')) {
//				if (i == 0)
//					str.erase(i + 1, 1);//符号在开头，删除后面一个空格；
//				else {
//					str.erase(i - 1, 1);
//					str.erase(i , 1);
//
//				}
//			}
//
//		}
//		for (int i = 0; i < str.size(); i++) {
//			if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ' && (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i]>'z')) {
//				if (str[i - 1] == ' ')str.erase(i - 1, 1);
//			}
//		}
//		cout << str << endl;
//
//	}
//	return 0;
//
//}