//#include<bits/stdc++.h>
//using namespace std;
//vector<int > zi;
//
//void erjinzhi(int num, vector<int>& tmp){
//    
//    stack<int> st;
//    while (num != 0) {
//        st.push(num % 2);
//        num /= 2;
//
//    }
//    while (st.size() < 8)st.push(0);
//    for (int i = 0; i < 8; i++) {
//        tmp.push_back(st.top());
//        st.pop();
//    }
//
//}
//int main() {
//    int a1, a2, a3, a4 , k;
//    scanf("%d.%d.%d.%d/%d", &a1, &a2, &a3, &a4, &k);
//    erjinzhi(a1, zi);
//    erjinzhi(a2, zi);
//    erjinzhi(a3, zi);
//    erjinzhi(a4, zi);
//    //for (int i = 0; i < 32; i++)cout << zi[i];
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int b1, b2, b3, b4;
//        scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
//        vector<int> tmp;
//        erjinzhi(b1, tmp);
//        erjinzhi(b2, tmp);
//        erjinzhi(b3, tmp);
//        erjinzhi(b4, tmp);
//        bool flag = 1;
//        for (int i = 0; i < k; i++) {
//            if (tmp[i] != zi[i]) {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)cout << "YES\n";
//        else cout << "NO\n";
//    }
//    return 0;
//}