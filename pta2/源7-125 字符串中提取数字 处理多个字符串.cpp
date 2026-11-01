//
//#include<iostream>
//#include<cstring>
//using namespace std;
//string a;
//int main() {
//    int n;
//    cin >> n;
//    while (n--) {
//        cin >> a;
//        int len = a.size();
//        int l = -1, r = -1;
//        for (int i = 0; i < len; i++) {
//            if (a[i] == '(') l = i;
//            else if (a[i] == ')') { r = i; break; }
//        }
//        if (r == -1 || l == -1) { cout << "not find" << endl; continue; }//括号缺了
//        if (a[l + 1] < '0' || a[l + 1]>'9') { cout << "not find" << endl; continue; }//（后一个不是数字
//        if (a[l + 1] == '0' && (a[l + 2] < '0' || a[l + 2]>'9' || a[l + 2] == '0')) { cout << "not find" << endl; continue; }//只有一个零
//        for (int i = l; i < l + 3; i++) {
//            if (a[i] > '0' && a[i] <= '9') printf("%c", a[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}