#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
typedef long long ll;
typedef pair<int, int> pii;

set<ll> se;
void solve() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.size(); i++) {
        int j = i;
        int num = 0;
        if (s[i] == '6') {
            while (1) {
                if (s[j] == '6') {
                    //cout<<"dao"<<endl;
                    j++;
                    num++;
                }
                else break;
            }
            //cout<<num<<endl;
            i = i + num - 1;
        }
        if (num != 0) {
            if (num > 3 && num <= 9)cout << 9;
            else if (num > 9)cout << 27;
            else {
                for (int k = 1; k <= num; k++)cout << '6';
            }
        }
        else cout << s[i];
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)solve();



    return 0;
}