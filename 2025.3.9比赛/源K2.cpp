#include <bits/stdc++.h>
using namespace std;
const double G = 6.67430e-11;

// 计算两个球在引力作用下的距离变化
double calculateDistance(double a, double b, double d, double t) {
    double dt = 0.01; // 时间步长
    double r = d; // 当前距离
    double v = 0.0; // 当前速度

    for (double time = 0; time < t; time += dt) {
        double a1 = G * a * b / (r * r); // 球1受到的加速度
        double a2 = G * a * b / (r * r); // 球2受到的加速度
        v += (a1 + a2) / (a + b) * dt; // 更新速度
        r += v * dt; // 更新距离
    }
    return r;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        double a, b, d, t;
        cin >> a >> b >> d >> t;
        double result = calculateDistance(a, b, d, t);
        printf("%.20lf\n", result);
    }
    return 0;
}
/*
1 2 3 4
3.00000000007969669369
7 73 7 68
7.00000004024852628959
100 100 1 100
1.00003337446586026971
*/