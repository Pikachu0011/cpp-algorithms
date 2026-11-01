#include<iostream>
using namespace std;
int main() {
    int s, s1, s2;
    int x, y;
    scanf("%d %d", &x, &y);
    s1 = x * y / 2;
    s2 = (y + 100) * (100 - x) / 2;
    s = 100 * 100 / 2 - s1 - s2;
    cout << s << endl;


    return 0;
}