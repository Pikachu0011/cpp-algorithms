#include<bits/stdc++.h>
using namespace std;
int main() {
    int year1;
    cin >> year1;
    int y1, y2, y3, y4;
    y1 = year1 / 1000;


    int n1 = year1 % 1000;
 

    y2 = n1 / 100;
 
    int n2 = n1 % 100;

    y3 = n2 / 10;
 
    y4 = n2 % 10;
    cout << y1 << " " << y2 <<" "<< y3 << " " << y4;


    return 0;
}