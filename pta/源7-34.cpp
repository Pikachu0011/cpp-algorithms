#include <iostream>
using namespace std;

int gcd(int a, int b) { 
    return b ? gcd(b, a % b) : a; 
}

int main() {
    int n;
    cin >> n;
    int numerator = 0, denominator = 1;
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d/%d", &a, &b);
        numerator = numerator * b + a * denominator;
        denominator *= b;
        int common_divisor = gcd(abs(numerator), denominator);
        numerator /= common_divisor;
        denominator /= common_divisor;
    }
    int integer_part = numerator / denominator;
    numerator %= denominator;
    
    if (numerator) {
        if (integer_part) {
            cout << integer_part << " ";
            
        }
        cout << numerator << "/" << denominator;

    }
    else if (integer_part) {
        cout << integer_part;
    }

        
    else if (!integer_part) cout << "0";

    cout << endl;
    return 0;
}
