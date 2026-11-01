#include<iostream>
#include<map>
using namespace std;
int main() {
    int size, m, q;
    map<int, int> mp;
    cin >> size >> m >> q;
    int tm = m;
    while (tm--) {
        int ye, kuai;
        cin >> ye >> kuai;
        mp[ye] = kuai;
    }
    while (q--) {
        int x;
        cin >> x;
        int y = x / size;

        int k = mp[y];
        if (y >= m) {
            cout << "Illegal\n";
        }
        else if (k == -1) {
            cout << "Missing\n";
        }
        else {
            int pian = x % size;
            cout << k * size + pian << endl;
        }
    }



    return 0;
}