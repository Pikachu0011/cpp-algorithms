#include<bits/stdc++.h>

using namespace std;

const int N = 100010;
int tt;//Ä£ÄâÕ»  Õ»¶¥ÏÂ±ê
vector<int> stk(N);
void add(int x) {
    tt++;
    stk[tt] = x;
}
//ÅÐ¿Õ
bool kong() {
    if (tt == 0)return 1;
    else return 0;
}
void pop() {
    if (!kong()) {
        cout << stk[tt] << endl;
        tt--;
    }
    else cout << "PeekMedian\n";
}
//²éÑ¯Õ»¶¥
int cha() {
    return stk[tt];
}
void PM() {
    if (tt > 0) {
        vector<int> temp(stk.begin() + 1, stk.begin() + 1 + tt);
        sort(temp.begin(), temp.end());
        cout << temp[(tt + 1) / 2 - 1] << endl;
    }
    else cout << "Invalid\n";
}
int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "Push") {
            int x;
            cin >> x;
            add(x);
        }
        else if (s == "Pop") {
            pop();
        }
        else if (s == "PeekMedian") {
            PM();
        }
        
    }
    return 0;
}