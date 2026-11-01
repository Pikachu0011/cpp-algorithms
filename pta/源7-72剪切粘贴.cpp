////#include<bits/stdc++.h>
////using namespace std;
////int main() {
////	string ss;
////	cin >> ss;
////	int n;
////	cin >> n;
////	while (n--) {
////		int a1, a2;
////		
////		string s1, s2;
////
////		cin >> a1 >> a2 >> s1 >> s2;
////		string s3 = s1 + s2;
////		string s4;
////		for (int i = a1 - 1; i <= a2 - 1; i++) {
////			s4 += ss[i];
////		}
////		ss.erase(a1 - 1, s4.size());
////		if (ss.find(s3) != string::npos) {
////			ss.insert(ss.find(s2), s4);
////		}
////		else {
////			ss += s4;
////		}
////	}
////	cout << ss << endl;
////
////
////	return 0;
////}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string ss; 
//    cin >> ss;
//    int n; 
//    cin >> n;
//
//    while (n--) {
//        int a1, a2; 
//        string s1, s2;
//        cin >> a1 >> a2 >> s1 >> s2;
//
//      
//        string clipboard = ss.substr(a1 - 1, a2 - a1 + 1);
//        ss.erase(a1 - 1, a2 - a1 + 1);
//      
//        string target = s1 + s2; 
//        size_t pos = ss.find(target);
//
//        if (pos != string::npos) {
//         
//            ss.insert(pos + s1.length(), clipboard);
//        }
//        else {
//         
//            ss += clipboard;
//        }
//    }
//
//   
//    cout << ss << endl;
//    return 0;
//}
