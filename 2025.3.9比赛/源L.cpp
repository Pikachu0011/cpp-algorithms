#include<bits/stdc++.h>

using namespace std;


struct Point {
    int x;
    int y;
};


bool cmp(const Point& a, const Point& b) {
    return a.x < b.x;
}

int main() {
    int N;
    cin >> N;

    vector<Point> red(N);
    vector<Point> blue(N);

    
    for (int i = 0; i < N; ++i) {
        cin >> red[i].x >> red[i].y;
    }

   
    for (int i = 0; i < N; ++i) {
        cin >> blue[i].x >> blue[i].y;
    }

   
    sort(red.begin(), red.end(), cmp);

    vector<bool> usedBlue;
    int count = 0;

    // 遍历每个红点
    for (auto red : red) {
        int minYIndex = -1;
        int minY = 2 * N;
        // 遍历每个蓝点
        for (int i = 0; i < N; ++i) {
            if (!usedBlue[i] && blue[i].x > red.x && blue[i].y > red.y) {
                if (blue[i].y < minY) {
                    minY = blue[i].y;
                    minYIndex = i;
                }
            }
        }
        if (minYIndex != -1) {
            usedBlue[minYIndex] = true;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
///*
//*0123456789
//0****2***************
//1***1****************
//21*******************
//3*1******************
//4**2*****************
//5*****2**************
//6********************
//7********************
//*/
//
//
//
//
//
